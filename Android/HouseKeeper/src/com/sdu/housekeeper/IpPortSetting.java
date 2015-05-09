package com.sdu.housekeeper;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.view.Menu;
import android.view.View;
import android.view.Window;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import com.example.housekeeper.R;
import com.sdu.util.RWSharedperferences;

public class IpPortSetting extends Activity {
	
	Intent intent = new Intent();
	private EditText ipEdit,portEdit;
	private Button cancelButton,submitButton;
	private RWSharedperferences rws=null;
	
	private Context context=null;
	
	protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        requestWindowFeature(Window.FEATURE_NO_TITLE);//去掉标题
        setContentView(R.layout.ipandport);
        
        ipEdit = (EditText) findViewById(R.id.setipedit);
        portEdit = (EditText) findViewById(R.id.setportedit);
        cancelButton = (Button) findViewById(R.id.cancelbutton);
        submitButton = (Button) findViewById(R.id.submitbutton); 
        
        rws=new RWSharedperferences();
        
        context=this;
        
        ipEdit.setText(rws.read(context, "ip"));
        portEdit.setText(rws.read(context, "port"));
       
     // 事件监听
        cancelButton.setOnClickListener(new Button.OnClickListener() {
     			public void onClick(View v) {
     				ipEdit.setText("");	
     				portEdit.setText("");	
     			}
     		});
        submitButton.setOnClickListener(new Button.OnClickListener() {
 			public void onClick(View v) {
 				rws.write(context, "ip", ipEdit.getText().toString());
 				rws.write(context, "port", portEdit.getText().toString());
 				Toast.makeText(getApplicationContext(), "设置成功!", Toast.LENGTH_SHORT).show();
 			}
 		});
    }
	
	@Override
	public void onBackPressed() {
		super.onBackPressed();
        intent.setClass(IpPortSetting.this, MainActivity.class);   
        startActivity(intent);
        finish();
	}


    public boolean onCreateOptionsMenu(Menu menu) {
        return true;
    }

}
