package com.sdu.util;

import android.graphics.Bitmap;
import android.graphics.Matrix;

public class SetScaleImage {
	// ����ͼƬ��С
	public Bitmap getScaleImg(Bitmap bm, int newWidth, int newHeight) {
		// ���ͼƬ�Ŀ��
		int width = bm.getWidth();
		int height = bm.getHeight();
		// ������Ҫ�Ĵ�С
		int newWidth1 = newWidth;
		int newHeight1 = newHeight;
		// �������ű���
		float scaleWidth = ((float) newWidth1) / width;
		float scaleHeight = ((float) newHeight1) / height;
		// ȡ����Ҫ���ŵ�matrix����
		Matrix matrix = new Matrix();
		matrix.postScale(scaleWidth, scaleHeight);
		// �õ��µ�ͼƬ
		Bitmap newbm = Bitmap.createBitmap(bm, 0, 0, width, height, matrix,
				true);
		return newbm;
	}
}
