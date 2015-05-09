package com.sdu.housekeeper;

import java.util.ArrayList;
import java.util.List;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.location.Location;
import android.location.LocationManager;
import android.os.Bundle;
import android.os.StrictMode;
import android.speech.RecognizerIntent;
import android.view.View;
import android.view.Window;
import android.widget.Button;
import android.widget.Toast;

import com.example.housekeeper.R;
import com.sdu.util.RWSharedperferences;

public class EnterActitvity extends Activity {

	private Button changepasswd, ctlButton;
	private Intent intent = new Intent();
	private SocketClient socketClient = null;
	private RWSharedperferences rws = null;
	private boolean flag = false;

	private String command[] = { "打开蜂鸣器", "增大声音", "减小声音", "关闭","发送位置信息" };
	private String cmd[] = { "openBuzzer", "volumeRise", "volumeDec",
			"closeBuzzer","sendLocation" };
	
	private static final int VOICE_RECOGNITION_REQUEST_CODE = 1234;

	private Context context = null;

	public final static String SER_KEY = "com.tutor.objecttran.ser";

	@SuppressLint("NewApi")
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		requestWindowFeature(Window.FEATURE_NO_TITLE);// 去掉标题栏
		setContentView(R.layout.activity_enter);
		
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
		
        System.out.println("dassssss");
        socketClient = new SocketClient();
        
		System.out.println("ssssssssssss");
		changepasswd = (Button) findViewById(R.id.changepasswd);
		ctlButton = (Button) findViewById(R.id.control);

		rws = new RWSharedperferences();
		context = this;
		
		String ip = rws.read(context, "ip");
		int port = Integer.parseInt(rws.read(context, "port"));
		socketClient.connection(ip, port);
		
		socketClient.setName(rws.read(context, "name"));
		socketClient.setPwd(rws.read(context, "pwd"));

		// 修改密码
		changepasswd.setOnClickListener(new View.OnClickListener() {
			@Override
			public void onClick(View arg0) {
				intent.setClass(EnterActitvity.this, ChangePasswd.class);
				//Bundle mBundle = new Bundle();
				//mBundle.putSerializable(SER_KEY, socketClient);
				//intent.putExtras(mBundle);
				startActivity(intent);
			}
		});

		// 进入控制界面
		ctlButton.setOnClickListener(new View.OnClickListener() {
			@Override
			public void onClick(View arg0) {
				if (rws.read(context, "ctlway").equals("0")) {
					// Check to see if a recognition activity is present
					PackageManager pm = getPackageManager();
					List<ResolveInfo> activities = pm
							.queryIntentActivities(new Intent(
									RecognizerIntent.ACTION_RECOGNIZE_SPEECH),
									0);
					if (activities.size() != 0) {
						startVoiceRecognitionActivity();
					} else {
						Toast.makeText(getApplicationContext(), "语音识别不可用!",
								Toast.LENGTH_SHORT).show();
					}
				} else {
					intent.setClass(EnterActitvity.this, RemoteCtlActivity.class);
					startActivity(intent);
				}
			}
		});
		
		 LocationManager locationManager = (LocationManager) getSystemService(Context.LOCATION_SERVICE);  
	     Location location = locationManager.getLastKnownLocation(LocationManager.NETWORK_PROVIDER);
	     double latitude = location.getLatitude();     //经度   
	     double longitude = location.getLongitude(); //纬度   
	     //double altitude =  location.getAltitude();     //海拔  
	     System.out.println("latitude " + latitude + "  longitude:" + longitude);
	     
	}

	// 语音识别
	protected void startVoiceRecognitionActivity() { // bool=false;
		// 通过Intent传递语音识别的模式
		Intent intent = new Intent(RecognizerIntent.ACTION_RECOGNIZE_SPEECH);
		// 语言模式和自由形式的语音识别
		intent.putExtra(RecognizerIntent.EXTRA_LANGUAGE_MODEL,
				RecognizerIntent.LANGUAGE_MODEL_FREE_FORM);
		// 提示语音开始
		intent.putExtra(RecognizerIntent.EXTRA_PROMPT,
				"Speech recognition demo");
		// 开始执行我们的Intent、语音识别
		startActivityForResult(intent, VOICE_RECOGNITION_REQUEST_CODE);
	}

	@Override
	// 当语音结束时的回调函数onActivityResult
	protected void onActivityResult(int requestCode, int resultCode, Intent data) {
		if (requestCode == VOICE_RECOGNITION_REQUEST_CODE
				&& resultCode == RESULT_OK) {
			// 取得语音的字符
			ArrayList<String> matches = data
					.getStringArrayListExtra(RecognizerIntent.EXTRA_RESULTS);
			for (int i = 0; i < matches.size(); i++) {
				for (int j = 0; j < command.length; j++) {
					if (matches.get(i).equals(command[j])) {
						Toast.makeText(getApplicationContext(), command[j],
								Toast.LENGTH_SHORT).show();
						remoteCtl(cmd[j]);
						flag = true;
						break;
					}
				}
				if (flag) {
					break;
				}
			}
		}
		if (!flag) {
			Toast.makeText(getApplicationContext(), "未识别的命令!",
					Toast.LENGTH_SHORT).show();
		} else {
			flag = false;
		}
		super.onActivityResult(requestCode, resultCode, data);
	}

	@Override
	public void onBackPressed() {
		super.onBackPressed();
		socketClient.sendCommand("close");
		socketClient.close();
		intent.setClass(EnterActitvity.this, LoginActivity.class);
		startActivity(intent);
		finish();
	}

	// 执行远程控制
	public void remoteCtl(String comd) {
		if(!comd.equals("sendLocation")){
		socketClient.sendCommand(comd);
		}
		else{
		LocationManager locationManager = (LocationManager) getSystemService(Context.LOCATION_SERVICE);  
		Location location = locationManager.getLastKnownLocation(LocationManager.NETWORK_PROVIDER);
		double latitude = location.getLatitude();     //经度   
	    double longitude = location.getLongitude(); //纬度   
	    //double altitude =  location.getAltitude();     //海拔  
		System.out.println("latitude " + latitude + "  longitude:" + longitude);
		socketClient.sendCommand(comd+"/"+latitude+"/"+longitude);
		}
		String info = socketClient.receiveinfo();
		if (info.equals(comd + " succeed")) {
			Toast.makeText(getApplicationContext(), "执行成功!", Toast.LENGTH_SHORT)
					.show();
		} else if (info.equals("")) {
			Toast.makeText(getApplicationContext(), "请检查网络设置!",
					Toast.LENGTH_SHORT).show();
		}
	}
}
