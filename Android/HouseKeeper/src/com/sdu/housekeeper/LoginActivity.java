package com.sdu.housekeeper;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.StrictMode;
import android.view.Menu;
import android.view.View;
import android.view.Window;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.Toast;

import com.example.housekeeper.R;
import com.sdu.util.RWSharedperferences;

public class LoginActivity extends Activity {

	private Button loginbutton = null;
	private Intent intent = new Intent();

	private EditText nameEdit, pwdEdit;
	private CheckBox remBox;
	private RWSharedperferences rws = null;

	private SocketClient socketClient = null;

	private Context context = null;

	//public final static String SER_KEY = "com.tutor.objecttran.ser";

	@SuppressLint("NewApi")
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		requestWindowFeature(Window.FEATURE_NO_TITLE);// 去掉标题栏
		setContentView(R.layout.activity_login);
		

		StrictMode.setThreadPolicy(
				new StrictMode.ThreadPolicy.Builder()
				                           .detectDiskReads()
				                           .detectDiskWrites()
				                           .detectNetwork()
				                           .penaltyLog()
				                           .build());
		StrictMode.setVmPolicy(
				new StrictMode.VmPolicy.Builder()
				              .detectLeakedSqlLiteObjects()
				              .detectLeakedClosableObjects()
				              .penaltyLog()
				              .penaltyDeath()
				              .build());
		
		socketClient = new SocketClient();

		loginbutton = (Button) findViewById(R.id.loginbutton);
		loginbutton.setBackgroundResource(R.drawable.loginbutton);

		nameEdit = (EditText) findViewById(R.id.userid);
		pwdEdit = (EditText) findViewById(R.id.userpw);

		remBox = (CheckBox) findViewById(R.id.remanberbox);

		context = this;

		rws = new RWSharedperferences();
		if (rws.read(context, "remflag").equals("1")) {
			nameEdit.setText(rws.read(context, "name"));
			pwdEdit.setText(rws.read(context, "pwd"));
			remBox.setChecked(true);
		} else {
			remBox.setChecked(false);
		}
		
		String ip = rws.read(context, "ip");
		int port = Integer.parseInt(rws.read(context, "port"));
		socketClient.connection(ip, port);

		// 点击login按钮
		loginbutton.setOnClickListener(new View.OnClickListener() {
			@SuppressWarnings("static-access")
			@Override
			public void onClick(View v) {
				loginbutton.setBackgroundResource(R.drawable.loginbuttondown);
				if (remBox.isChecked()) {
					rws.write(context, "remflag", "1");
					rws.write(context, "name", nameEdit.getText().toString());
					rws.write(context, "pwd", pwdEdit.getText().toString());
				} else {
					rws.write(context, "remflag", "0");
					rws.write(context, "name", nameEdit.getText().toString());
					rws.write(context, "pwd", pwdEdit.getText().toString());
				}
				
				socketClient.setName(nameEdit.getText().toString());
				socketClient.setPwd(pwdEdit.getText().toString());
				socketClient.sendCommand("login");
				
				String info = socketClient.receiveinfo();
				Toast.makeText(getApplicationContext(),info,
						Toast.LENGTH_SHORT).show();
				
				if (info.equals("login succeed")) {
					intent.setClass(LoginActivity.this, EnterActitvity.class);
					intent.setFlags(intent.FLAG_ACTIVITY_CLEAR_TOP);
					startActivity(intent);
				} 
				else if (info.equals("login failed")) {
					Toast.makeText(getApplicationContext(), "用户名或密码错误!",
							Toast.LENGTH_SHORT).show();
				} else if (info.equals("")) {
					Toast.makeText(getApplicationContext(), "请检查网络连接!",
							Toast.LENGTH_SHORT).show();
				}
			}
		});

	}

	@Override
	public void onBackPressed() {
		super.onBackPressed();
		intent.setClass(LoginActivity.this, MainActivity.class);
		startActivity(intent);
		socketClient.sendCommand("close");
		socketClient.close();
		finish();
	}

	public boolean onCreateOptionsMenu(Menu menu) {
		return true;
	}

}
