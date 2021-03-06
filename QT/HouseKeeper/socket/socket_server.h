#ifndef SOCKET_SERVER_H
#define SOCKET_SERVER_H

#include <QThread>
#include <stdio.h> 
#include <stdlib.h> 
#include <errno.h> 
#include <string.h> 
#include <sys/types.h> 
#include <netinet/in.h> 
#include <sys/socket.h> 
#include <sys/wait.h> 
#include "clientThread.h"
#define SERVPORT 3333 /*服务器监听端口号 */ 
#define BACKLOG 10 /* 最大同时连接请求数 */ 

class Socket_server:public QThread
{
   Q_OBJECT
public:
    Socket_server();
    ~Socket_server();

signals:
void signal_getNewCon(int);

protected:
    void run();

private:
int sockfd,client_fd,sin_size; /*sock_fd:监听 socket;client_fd:数据传输 socket */
struct sockaddr_in my_addr; /* 本机地址信息 */ 
struct sockaddr_in remote_addr; /* 客户端地址信息 */ 
};


#endif
