package com.sdu.housekeeper;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.Context;
import android.location.Location;
import android.location.LocationManager;
import android.os.Bundle;
import android.os.StrictMode;
import android.view.View;
import android.view.Window;
import android.widget.Button;
import android.widget.Toast;

import com.example.housekeeper.R;
import com.sdu.util.RWSharedperferences;

public class RemoteCtlActivity extends Activity {

	private Button openBuzzerButton, closeBuzzerButton, volumeRiseButton,
			volumeDecButton,locationButton;
	private SocketClient socketClient = null;

	private String command[] = { "openBuzzer", "volumeRise", "volumeDec",
			"closeBuzzer","sendLocation"};
	
	private RWSharedperferences rws = null;
	private Context context = null;
	
	@SuppressLint("NewApi")
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		requestWindowFeature(Window.FEATURE_NO_TITLE);// ȥ��������
		setContentView(R.layout.activity_rctl);
		
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

		openBuzzerButton = (Button) findViewById(R.id.openBuzzer);
		volumeRiseButton = (Button) findViewById(R.id.volumeRise);
		volumeDecButton = (Button) findViewById(R.id.volumeDec);
		closeBuzzerButton = (Button) findViewById(R.id.closeBuzzer);
		locationButton = (Button) findViewById(R.id.location);
		
		// �¼�����
		openBuzzerButton.setOnClickListener(new View.OnClickListener() {
     			public void onClick(View v) {
     			remoteCtl(command[0]);
     			}
     		});
		
		volumeRiseButton.setOnClickListener(new View.OnClickListener() {
 			public void onClick(View v) {
 				remoteCtl(command[1]);
 			}
 		});
		
		volumeDecButton.setOnClickListener(new View.OnClickListener() {
 			public void onClick(View v) {
 				remoteCtl(command[2]);
 			}
 		});
		
		closeBuzzerButton.setOnClickListener(new View.OnClickListener() {
 			public void onClick(View v) {
 				remoteCtl(command[3]);
 			}
 		});
		
		locationButton.setOnClickListener(new View.OnClickListener() {
 			public void onClick(View v) {
 				
 				remoteCtl(command[4]);
 			}
 		});
	}
	
	@Override
	public void onBackPressed() {
		socketClient.sendCommand("close");
		socketClient.close();
		finish();
	}

	// ִ��Զ�̿���
	public void remoteCtl(String comd) {
		if(!comd.equals("sendLocation")){
			socketClient.sendCommand(comd);
			}
			else{
			LocationManager locationManager = (LocationManager) getSystemService(Context.LOCATION_SERVICE);  
			Location location = locationManager.getLastKnownLocation(LocationManager.NETWORK_PROVIDER);
			double latitude = location.getLatitude();     //����   
		    double longitude = location.getLongitude(); //γ��   
		    //double altitude =  location.getAltitude();     //����  
			System.out.println("latitude " + latitude + "  longitude:" + longitude);
			socketClient.sendCommand(comd+"/"+latitude+"/"+longitude);
			}
		String info = socketClient.receiveinfo();
		if (info.equals(comd + " succeed")) {
			Toast.makeText(getApplicationContext(), "ִ�гɹ�!", Toast.LENGTH_SHORT)
					.show();
		} else if (info.equals("")) {
			Toast.makeText(getApplicationContext(), "������������!",
					Toast.LENGTH_SHORT).show();
		}
	}
}
