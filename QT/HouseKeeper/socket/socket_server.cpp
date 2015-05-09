#include <socket_server.h> 
#include <QtDebug>

Socket_server::Socket_server()
{ 
}

Socket_server::~Socket_server(){
}

//run方法
void Socket_server::run()
{
if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)//建立 socket 
	{ 
	perror("socket");
	exit(1); 
	} 

my_addr.sin_family=AF_INET; 
my_addr.sin_port=htons(SERVPORT); 
my_addr.sin_addr.s_addr = INADDR_ANY; //表示监听任何地址
bzero(&(my_addr.sin_zero),8); 

if (bind(sockfd, (struct sockaddr *)&my_addr, sizeof(struct sockaddr)) == -1) //将本机地址与建立的套接字号进行绑定
	{ 
	perror("bind"); 
	exit(1); 
	} 

if (listen(sockfd, BACKLOG) == -1) //开始监听
	{ 
	perror("listen"); 
	exit(1); 
	} 
qDebug()<<"running...";
while(1) 
{ 
	sin_size = sizeof(my_addr); 
	if ((client_fd = accept(sockfd, (struct sockaddr*)&remote_addr, (socklen_t *) &sin_size)) == -1)//接收客户端的连接
 		{ 
		perror("accept"); 
		continue; 
		} 
  	qDebug()<<"received a connection"; 
        emit(signal_getNewCon(client_fd));
	} 
}

