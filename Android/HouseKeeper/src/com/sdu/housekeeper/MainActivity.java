package com.sdu.housekeeper;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.Window;
import android.widget.ImageView;
import android.widget.Toast;

import com.example.housekeeper.R;

public class MainActivity extends Activity {
	
	private ImageView enterimg, helpimg, aboutimg, settingimg, familyimg;
	Intent intent = new Intent();
	private static int num = 1;
	private boolean isExit; 
	
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        requestWindowFeature(Window.FEATURE_NO_TITLE);//去掉标题栏
        setContentView(R.layout.menu);
        
        enterimg = (ImageView) findViewById(R.id.enterimg);
        helpimg = (ImageView) findViewById(R.id.helpimg);
        aboutimg = (ImageView) findViewById(R.id.aboutimg);
        settingimg = (ImageView) findViewById(R.id.settingimg);
        familyimg = (ImageView) findViewById(R.id.familyimg);
        
        //进入控制菜单
        enterimg.setOnClickListener(new View.OnClickListener() {
        	
			@Override
			public void onClick(View v) {
				enterimg.setBackgroundResource(R.drawable.enterdown);
            	intent.setClass(MainActivity.this, LoginActivity.class);
            	intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
            	startActivity(intent);
				finish();
			}
		});
        //进入帮助菜单
        helpimg.setOnClickListener(new View.OnClickListener() {
			
			@Override
			public void onClick(View v) {
				helpimg.setBackgroundResource(R.drawable.helpdown);
				intent.setClass(MainActivity.this, HelpActivity.class);
				intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
            	startActivity(intent);
				finish();
			}
		});
        //进入关于菜单
        aboutimg.setOnClickListener(new View.OnClickListener() {
			
			@Override
			public void onClick(View v) {
				aboutimg.setBackgroundResource(R.drawable.aboutdown);
				intent.setClass(MainActivity.this, AboutActivity.class);
				intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
            	startActivity(intent);
				finish();
			}
		});
        //进入设置菜单
        settingimg.setOnClickListener(new View.OnClickListener() {
			
			@Override
			public void onClick(View v) {
				settingimg.setBackgroundResource(R.drawable.settingdown2);
				intent.setClass(MainActivity.this, TabHost.class);
				intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
            	startActivity(intent);
				finish();
			}
		});
        
        //进入家庭菜单
        familyimg.setOnClickListener(new View.OnClickListener() {
			
			@Override
			public void onClick(View v) {
				num++;
				if(num % 2 == 0){
					familyimg.setBackgroundResource(R.drawable.familydown);
				}else{
					familyimg.setBackgroundResource(R.drawable.family);
				}
			}
		});
        
	 }
    
	 
    //实现菜单选项
	 @Override
    public boolean onCreateOptionsMenu(Menu menu) {
		 menu.add(0, 0, 0, "关于");
		 menu.add(0, 1, 1, "退出");
        return super.onCreateOptionsMenu(menu);
    }
	 
	 public boolean onOptionsItemSelected(MenuItem item){
	    super.onOptionsItemSelected(item);
	    switch(item.getItemId())
	    {
	      case 0:
	        break;
	      case 1:
	        finish();
	        break;
	    }
	    return true;
	  }
	 
	 
	 //实现双击退出
	 @Override  
     public boolean onKeyDown(int keyCode, KeyEvent event) {  
        if (keyCode == KeyEvent.KEYCODE_BACK) {  
            ExitActivity();  
            return false;  
        } else {  
            return super.onKeyDown(keyCode, event);  
        }  
     }  
	 
	 public void ExitActivity(){  
	        if (!isExit) {  
	            isExit = true;  
	            Toast.makeText(getApplicationContext(), "再按一次退出程序", Toast.LENGTH_SHORT).show();  
	            mHandler.sendEmptyMessageDelayed(0, 2000);  
	        } else {  
	            Intent intent = new Intent(Intent.ACTION_MAIN);  
	            intent.addCategory(Intent.CATEGORY_HOME);  
	            startActivity(intent);  
	            System.exit(0);  
	        }  
	    } 
	 
	 @SuppressLint("HandlerLeak")
	Handler mHandler = new Handler() {  
	        @Override  
	        public void handleMessage(Message msg) {  
	            super.handleMessage(msg);  
	            isExit = false;  
	        }  
	    };

}
