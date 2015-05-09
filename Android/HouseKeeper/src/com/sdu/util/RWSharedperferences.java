package com.sdu.util;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.SharedPreferences.Editor;

public class RWSharedperferences {
	private String strValue = null;
	private String name[] = { "name","pwd","remflag", "ip", "port","ctlway", "rctlway"};
	private String value[] = { "null", "null", "0","127.0.0.1", "3333", "0", "0"};

	// �������ļ��ж�ȡ����
	public String read(Context context, String keyName) {
		SharedPreferences share = context.getSharedPreferences("housekeeper",
				Context.MODE_PRIVATE);
		strValue = share.getString(keyName, "");// ����keyѰ��ֵ ����1 key ����2
												// ���û��value��ʾ������
		if (strValue.contentEquals("")) {
			for (int i = 0; i < name.length; i++) {
				write(context, name[i], value[i]);
			}
		}
		return strValue;
	}

	// ������д�������ļ���
	public void write(Context context, String keyName, String keyValue) {
		SharedPreferences share = context.getSharedPreferences("housekeeper",
				Context.MODE_PRIVATE);
		Editor editor = share.edit();// ȡ�ñ༭��
		editor.putString(keyName, keyValue);// �洢���� ����1 ��key ����2 ��ֵ
		editor.putString(keyName, keyValue);
		editor.commit();// �ύˢ������
	}
}
