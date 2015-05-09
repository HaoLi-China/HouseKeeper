package com.sdu.util;

import java.io.IOException;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Paint.Align;

public class BookPageFactory {
	private Bitmap m_book_bg[] = new Bitmap[3];
	
	private int pageNum=3;
	private int currentPage=0;

	private boolean m_isfirstPage,m_islastPage;

	private Paint mPaint;

	public BookPageFactory(int w, int h) {
		// TODO Auto-generated constructor stub
		mPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
		mPaint.setTextAlign(Align.LEFT);
	}

	public void prePage() throws IOException {
		if (currentPage==0) {
			m_isfirstPage=true;
			return;
		}
		else{
			currentPage--;
			m_isfirstPage=false;
		}
	}

	public void nextPage() throws IOException {
		if (currentPage==pageNum-1) {
			m_islastPage=true;
			return;
		}else {
			currentPage++;
			m_islastPage=false;
		}
	}

	public void onDraw(Canvas c) {
	    c.drawBitmap(m_book_bg[currentPage], 0, 0, null);
	}

	public void setBgBitmap(Bitmap BG[]) {
		m_book_bg = BG;
	}
	
	public boolean isfirstPage() {
		return m_isfirstPage;
	}
	public boolean islastPage() {
		return m_islastPage;
	}
}
