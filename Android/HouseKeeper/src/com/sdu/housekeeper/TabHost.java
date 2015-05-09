package com.sdu.housekeeper;

import android.app.TabActivity;
import android.content.Intent;
import android.os.Bundle;
import android.view.Window;

import com.example.housekeeper.R;

//������Ҫ�̳�ActivityGroup
@SuppressWarnings("deprecation")
public class TabHost extends TabActivity {
	Intent intent = new Intent();

	public void onCreate(Bundle savedInstanceState) {
		 super.onCreate(savedInstanceState);
		 this.requestWindowFeature(Window.FEATURE_NO_TITLE);
		 setContentView(R.layout.tabhost);

			android.widget.TabHost tabHost = getTabHost();

			tabHost.addTab(tabHost
					.newTabSpec("setipandport")
					.setIndicator("IP/Port",
							getResources().getDrawable(R.drawable.ic_launcher))
					.setContent(new Intent(this, IpPortSetting.class)));
			

			tabHost.addTab(tabHost
					.newTabSpec("setconway")
					.setIndicator("���Ʒ�ʽ",
							getResources().getDrawable(R.drawable.ic_launcher))
					.setContent(new Intent(this, ConwaySetting.class)));


			tabHost.setCurrentTab(0);

	}
	
	 
}
