package com.sdu.housekeeper;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.os.StrictMode;
import android.view.Menu;
import android.view.View;
import android.view.Window;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import com.example.housekeeper.R;
import com.sdu.util.RWSharedperferences;

public class ChangePasswd extends Activity {
	
	private EditText spinner=null;  
	private SocketClient socketClient=null;
	private Button resetButton,submitButton;
	private EditText oldPwdText,newPwdText;
	
	private RWSharedperferences rws = null;
	private Context context = null;
	
	@SuppressLint("NewApi")
	protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        requestWindowFeature(Window.FEATURE_NO_TITLE);//去掉标题栏
        setContentView(R.layout.changepasswd);
        
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
		
		rws = new RWSharedperferences();
		context = this;
		String ip = rws.read(context, "ip");
		int port = Integer.parseInt(rws.read(context, "port"));
		socketClient.connection(ip, port);
		
		socketClient.setName(rws.read(context, "name"));
		socketClient.setPwd(rws.read(context, "pwd"));
        
        spinner = (EditText)findViewById(R.id.useridspinner); 
        spinner.setText(socketClient.getName());
        spinner.setEnabled(false); 
        
        resetButton = (Button) findViewById(R.id.reset);
        submitButton = (Button) findViewById(R.id.changesubmit);
    	oldPwdText = (EditText) findViewById(R.id.oldpasswd);
        newPwdText = (EditText) findViewById(R.id.newpasswd);
        
        // 事件监听
        resetButton.setOnClickListener(new Button.OnClickListener() {
     			public void onClick(View v) {
     				oldPwdText.setText("");	
     				newPwdText.setText("");	
     			}
     		});
        submitButton.setOnClickListener(new Button.OnClickListener() {
 			public void onClick(View v) {
 				String oldPwd=oldPwdText.getText().toString();
 				String newPwd=newPwdText.getText().toString();
 				if(oldPwd.equals(socketClient.getPwd())){
 				socketClient.sendCommand("changepwd/"+oldPwd+"/"+newPwd);
 				String info=socketClient.receiveinfo();
 				if(info.equals("change succeed")){
 				 socketClient.setPwd(newPwd);
 				 oldPwdText.setText("");	
 				 newPwdText.setText("");
 				 Toast.makeText(getApplicationContext(), "修改密码成功!", Toast.LENGTH_SHORT).show();
 				}
 				else if(info.equals("change failed")){
 				  oldPwdText.setText("");	
 	 			  newPwdText.setText("");
 				  Toast.makeText(getApplicationContext(), "修改密失败!", Toast.LENGTH_SHORT).show();	
 				}
 				}
 				else{
 					oldPwdText.setText("");	
 	 	 			newPwdText.setText("");
 	 				Toast.makeText(getApplicationContext(), "修改密失败!", Toast.LENGTH_SHORT).show();		
 				}
 			}
 		});
        
    }

    public boolean onCreateOptionsMenu(Menu menu) {
        return true;
    }

}