package com.sdu.housekeeper;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.Window;

import com.example.housekeeper.R;

public class AboutActivity extends Activity {
	
	Intent intent = new Intent();
	
	 @Override
	    protected void onCreate(Bundle savedInstanceState) {
	        super.onCreate(savedInstanceState);
	        requestWindowFeature(Window.FEATURE_NO_TITLE);//»•µÙ±ÍÃ‚¿∏
	        setContentView(R.layout.activity_about);
	 }
	 
	 @Override
		public void onBackPressed() {
			super.onBackPressed();
	        intent.setClass(AboutActivity.this, MainActivity.class);   
	        startActivity(intent);
	        finish();
		} 

}
