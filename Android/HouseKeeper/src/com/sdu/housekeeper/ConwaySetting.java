package com.sdu.housekeeper;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.Toast;

import com.example.housekeeper.R;
import com.sdu.util.RWSharedperferences;

public class ConwaySetting extends Activity {
	
	private Intent intent = new Intent();
	private RadioButton voiceCtl,socketCtl,buttonCtl,gprsCtl;
	private Button submitButton;
	private RWSharedperferences rws=null;
	private Context context=null;
	
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.controlways);
        
        voiceCtl = (RadioButton) findViewById(R.id.voiseway);
        buttonCtl = (RadioButton) findViewById(R.id.buttonway);
        socketCtl = (RadioButton) findViewById(R.id.socketway);
        gprsCtl = (RadioButton) findViewById(R.id.gprsway);
        submitButton = (Button) findViewById(R.id.settingsubmit);
        
        rws=new RWSharedperferences();
        
        context=this;
        
        if(rws.read(context, "ctlway").equals("0")){
        	voiceCtl.setChecked(true);
        	buttonCtl.setChecked(false);
        }
        else{
        	voiceCtl.setChecked(false);
        	buttonCtl.setChecked(true);
        }
        if(rws.read(context, "rctlway").equals("0")){
        	socketCtl.setChecked(true);
        	gprsCtl.setChecked(false);
        }
        else{
        	socketCtl.setChecked(false);
        	gprsCtl.setChecked(true);
        }
        
        
        // 事件监听
        submitButton.setOnClickListener(new Button.OnClickListener() {
     			public void onClick(View v) {
     			if(voiceCtl.isChecked()){
     			rws.write(context, "ctlway", "0");
     			}
     			else{
     			rws.write(context, "ctlway", "1");
     			}
                if(socketCtl.isChecked()){
                rws.write(context, "rctlway", "0");	
     			}
     			else{
     			rws.write(context, "rctlway", "1");	
     			}
                Toast.makeText(getApplicationContext(), "设置成功!", Toast.LENGTH_SHORT).show();
     			}
     		});
    }
    
    @Override
	public void onBackPressed() {
		super.onBackPressed();
        intent.setClass(ConwaySetting.this, MainActivity.class);   
        startActivity(intent);
        finish();
	}

	
	
}