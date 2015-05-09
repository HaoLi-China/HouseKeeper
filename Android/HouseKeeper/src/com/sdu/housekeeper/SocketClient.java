package com.sdu.housekeeper;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.Serializable;
import java.net.Socket;

@SuppressWarnings("serial")
public class SocketClient implements Serializable {
	private Socket socket = null;
	private String username = "";
	private String pwd = "";
	
	PrintWriter out=null;
	
	BufferedReader in=null;

	public SocketClient() {
		
	}

	// 建立连接
	public void connection(final String ip, final int port) {
		
		Thread thread = new Thread(new Runnable() {
			@Override
			public void run() {
				// TODO Auto-generated method stub
				try {
					 socket = new Socket(ip, port);
					 in = new BufferedReader(
								new InputStreamReader(
										socket.getInputStream()));
					 out = new PrintWriter(new BufferedWriter(
								new OutputStreamWriter(socket.getOutputStream())),
								true);
				} catch (Exception e) {
					// close();
					System.out.println("zcvb");
					e.printStackTrace();
				}
			}
		});

		try {
			thread.start();
		} catch (Exception e) {
			System.out.println("fgbn");
			e.printStackTrace();
		}
	}

	// 关闭连接
	public void close() {
		try {
			in.close();
			out.close();
			socket.close();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	// 发送命令
	public void sendCommand(String command) {
		String strbuffer = "C:" + command + "N:" + username + "P:" + pwd;
		try {
			if (socket.isConnected()) {
				if (!socket.isOutputShutdown()) {
					out.println(strbuffer);
				}
			}
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	// 接收消息
	public String receiveinfo() {
		String content = "";
				try {
					if (socket.isConnected()) {
						if (!socket.isInputShutdown()) {
							content=in.readLine();
							System.out.println("content:"+content);
						}
					}
				} catch (Exception e) {
					System.out.println("sddddddddd");
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
		return content;
	}

	// 设置用户名
	public void setName(String username) {
		this.username = username;
	}

	// 设置密码
	public void setPwd(String pwd) {
		this.pwd = pwd;
	}

	// 获取用户名
	public String getName() {
		return username;
	}

	// 获取密码
	public String getPwd() {
		return pwd;
	}
}
