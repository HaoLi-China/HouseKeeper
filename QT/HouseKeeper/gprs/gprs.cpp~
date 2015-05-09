//#include <stdio.h>
#include <QtGui>
#include "gprs.h"
#include "messageRecieved.h"
//#define TIME 400;

//构造函数
Gprs::Gprs(){
TIME=200;
fd=0;//串口文件描述符
ringFlag=0;//来电标志位
serverNumFlag=0;//获取短信中心号码标志位
//readFlag=0;//读取信息标志位
serverNumber="13800531500";//短信中心号码

isRemoteCtl=false;//是否远程控制

isLocationInfo=false;//是否是位置信息

userListCL=new UserListCL();

initAT();

calledView=new CalledView(0,fd);
calledView->show();
calledView->setVisible(false);
}

//析构函数
Gprs::~Gprs()
{

}

//初始化系统
void Gprs::initAT()
{	
        //打开和设置端口
	if(fd==0)
	{
		if((fd=SerialPort::open_port(1))<0){
                QMessageBox::warning(0, tr("Warning:"),
                                  tr("Open port error!"));
               		 return; 
        	}

	        if((SerialPort::set_opt(fd,115200,8,'N',1))<0){
        	QMessageBox::warning(0, tr("Warning:"),
                                  tr("Set port error!"));
                	return;
		}
	}

                //tcflush(fd,TCIOFLUSH);
		resetBuff();//给buff清零


                //设置定时器
		timerRead = new QTimer;
                timerRead->start(TIME);
		connect( timerRead, SIGNAL(timeout()), this, SLOT(timeout_slot()) );

                //发送获取短信中心号码请求(部分设备不支持)
		//SerialPort::nwrite(fd,"AT+CSCA?\r\n",sizeof("AT+CSCA?\r\n"));
		//serverNumFlag=1;

                //呼叫线路识别显示
                SerialPort::nwrite(fd,"AT+CLIP=1\r\n",sizeof("AT+CLIP=1\r\n"));
}

//发送短消息
void Gprs::sendMsg(QString number,QString msg)
{
	QString strSendMsg=msg;
	QString strMobilephonenumber=number;
    	QString strServerNumber = serverNumber;
	
        
	if(strMobilephonenumber.length()!=11)
	{
		QMessageBox::information(0,tr("information"),tr("Moble Phone Number is error!"));
		return;
    	}

	if(strServerNumber.length()!=11)
   	{
		QMessageBox::information(0,tr("information"),tr("SMS Server Number is error!"));
		return;
    	}
    
    	if(strSendMsg.isEmpty())
    	{
		QMessageBox::information(0,tr("information"),tr("Message content is empty!"));
		return;
    	}
	if(fd)
    	{
		sendContent=PreSendMessage(strSendMsg , strMobilephonenumber) ;
    	}
}

//准备发送的消息包，进行封装操作
QString Gprs::PreSendMessage(QString strSendMsg, QString strPhoneNumber)
{
    	char ctl_Z=0x1A;    
	
    	QString strEncodeMsg="";  
    	QString strSendTemp="";

QString addr="86"+serverNumber+"F";
QString phoneNum="86"+strPhoneNumber+"F";
QString msg="";
QString content="";

//将短信中心号奇数位和偶数位交换
addr=NumberConversion(addr);
qDebug()<<addr;

//将短信息中心号码前面加上字符91，91是国际化的意思
addr="91"+addr;
qDebug()<<addr;

//算出addr长度，结果除2，格式化成2位的16进制字符串
int al=addr.length()/2;
QString addrLength= QString::number(al, 16);
if(al<16){
addrLength="0"+addrLength;
}
qDebug()<<addrLength;
addr=addrLength+addr;

//将手机号码奇数位和偶数位交换。
phoneNum=NumberConversion(phoneNum);
qDebug()<<phoneNum;


//信息内容转字符串转换为Unicode代码
msg=ToUnicode(strSendMsg);
qDebug()<<msg;

//将 msg 长度除2，保留两位16进制数，再加上 msg
int ml=msg.length()/2;
QString msgLength= QString::number(ml, 16);
if(ml<16){
msgLength="0"+msgLength;
}
qDebug()<<msgLength;
msg=msgLength+msg;

//组合
//手机号码前加上字符串 11000D91（1100：固定，0D：手机号码的长度，不算＋号，十六进制表示，91：发送到手机为91，发送到小灵通为81）
phoneNum = "11000D91" + phoneNum;
qDebug()<<phoneNum;

//手机号码后加上 000800 和刚才的短信息内容，000800短信有效期z,再加上ctl_Z；
content = phoneNum + "000800"+msg;
qDebug()<<content;
   
//phone 长度除以2，格式化成2位的十进制数
int length=content.length()/2;
qDebug()<<length;

content =addr+content+ctl_Z;

if ( fd>0 )
    {	
	QString sendata=QString("AT+CMGS=%1").arg(length);     
	sendata+="\r\n";    
	const char *send=sendata.toLatin1().data();    
	int len=strlen(send);    		
	SerialPort::nwrite( fd, send, len);
    }
    return content;
}

//读取串口缓冲区的消息并分析
void Gprs::ReadMsg(QString strRecv)
{	
 	//读取信息内容,并将信息内容写到本地
	if(strRecv.indexOf("+CMGR:",Qt::CaseInsensitive)>=0)
	{
		//readFlag=0;
		QString strNum;
		QString strMsgContent=ProcessMessage(strRecv,strNum);
                
                if(!isRemoteCtl&&!isLocationInfo){
                MessageRecieved *messageRecieved=new MessageRecieved(0,this,strNum,strMsgContent);
                messageRecieved->init();
		}
                isRemoteCtl=false;
                isLocationInfo=false;
                const char *chCmd;		
		QString cmd="AT+CMGD="+msgIndex+"\r\n";
		chCmd=cmd.toLatin1().data();
		int len=strlen(chCmd);
		SerialPort::nwrite(fd, chCmd, len);
	}
        //获取短信中心号码
	if(serverNumFlag)
	{
		int ITmp=strRecv.indexOf("+CSCA:\"+86", Qt::CaseInsensitive);
		if(ITmp>0 )
		{
	    		serverNumFlag=0;
			serverNumber=strRecv.mid(ITmp+sizeof("+CSCA:\"+86")-1,11);
			qDebug()<<("Init success"+serverNumber);
		}
		else{
			QMessageBox::warning(0, tr("Warning:"),
                                  tr("Can't get the server number!"));
                    }
	}
        //收到新消息
	if(strRecv.indexOf("+CMTI",Qt::CaseInsensitive)>=0)
	{
		int index=strRecv.indexOf(",");		
		msgIndex=strRecv.mid(index+2,2);
		//readFlag=1;
		qDebug()<<("New message arrive!");	
		ReadMessage(msgIndex);
	}
        //待发送短信
	if(strRecv.indexOf(">",Qt::CaseInsensitive)>=0)
	{
	        const char *sendata=sendContent.toLatin1().data();
	 	int len=strlen(sendata);
		if(fd>0){
			SerialPort::nwrite(fd,sendata,len);
                }
                qDebug()<<("send success");	
	}
        //获得来电者信息
        if(strRecv.indexOf("+CLIP:",Qt::CaseInsensitive)>=0)
	{
		if(ringFlag==0){
                
                int index1=strRecv.indexOf(" ");
                int index2=strRecv.indexOf(",");
                QString number=strRecv.mid(index1+2,index2-index1-3);
		ringFlag=1;
                
                calledView->setNum(number);
                calledView->setVisible(true);
                // ringFlag = 0;	
	}
}
        //来电结束
        if(strRecv.indexOf("ATH",Qt::CaseInsensitive)>=0||strRecv.indexOf("NO CARRIER",Qt::CaseInsensitive)>=0)
	{
               ringFlag = 0;
               calledView->stopTimer();
               calledView->setVisible(false);	
	}

        //对方挂断
        if(strRecv.indexOf("BUSY",Qt::CaseInsensitive)>=0||strRecv.indexOf("NO CARRIER",Qt::CaseInsensitive)>=0)
	{
               emit hangUp();	
	}
}

//读取短消息
void Gprs::ReadMessage(QString strMsgIndex)
{
	if(fd>0)
    	{
		//readFlag=1;
		const char *chCmd;		
		QString strCmdRead="AT+CMGR="+strMsgIndex+"\r\n";
		chCmd=strCmdRead.toLatin1().data();
		int len=strlen(chCmd);
		SerialPort::nwrite(fd, chCmd, len);
    	} 
}

//处理接受到的短消息
QString Gprs::ProcessMessage(QString strMsg,QString &strNum)
{
    QString strContent="";

    QString phoneNum="";
    QString time="";
    QString msg="";
    int index1,phoneNumlength,serverNumLength,msgLength;	
    			

    index1 = strMsg.lastIndexOf(',');			
	
    bool ok;
    //短信中心号码长度
    serverNumLength = strMsg.mid(index1+5,2).toInt(&ok,16)*2;
    qDebug()<< serverNumLength;

    //消息发送方号码长度
    phoneNumlength = strMsg.mid(index1+5+2+serverNumLength+2,2).toInt(&ok,16);
    qDebug()<<phoneNumlength;

    //提取发送方号码串
    phoneNum = strMsg.mid(index1+5+2+serverNumLength+6,phoneNumlength+phoneNumlength%2);
    qDebug()<<phoneNum;
    
    //恢复号码
    phoneNum=NumberConversion(phoneNum);
    phoneNum=phoneNum.mid(0,phoneNum.length()-phoneNumlength%2);
    qDebug()<<phoneNum;
    	if(phoneNum.mid(0,2).compare("86")==0){
	strNum=phoneNum.mid(2);
    }
	else if(phoneNum.mid(0,5).compare("12520")==0){
	strNum=phoneNum.mid(5);
    }
	else{
    strNum=phoneNum;
	}

    //提取时间串
    time = strMsg.mid(index1+5+2+serverNumLength+6+phoneNumlength+phoneNumlength%2+4,12);
    qDebug()<<time;
    
    //恢复时间
    time=NumberConversion(time);
    time=time.mid(0,2)+"-"+time.mid(2,2)+"-"+time.mid(4,2)+" "+time.mid(6,2)+":"+time.mid(8,2)+":"+time.mid(10,2);
    qDebug()<<time;    

    //提取短信内容
    msgLength=strMsg.mid(index1+5+2+serverNumLength+6+phoneNumlength+phoneNumlength%2+4+14,2).toInt(&ok,16)*2;
    msg = strMsg.mid(index1+5+2+serverNumLength+6+phoneNumlength+phoneNumlength%2+4+16,msgLength);
qDebug()<<msg;    
    
    //恢复短信内容
    msg=unicodeTo(msg);
    qDebug()<<msg;  

    //判断是否是远程控制的命令
    if(userListCL->ruIsHas(strNum)&&(msg.compare("$11")==0||msg.compare("$21")==0||msg.compare("$31")==0||msg.compare("$10")==0||    msg.compare("$20")==0||msg.compare("$30")==0)){
     isRemoteCtl=true;
     doRemoteCtl(msg);
    }

    strContent="Time:\n"+time+"\nContent:\n"+msg;


    userListCL->rmWrite(strNum,time,msg);
    
		
    return strContent;
}


//号码转换
QString Gprs::NumberConversion(QString strNumber)
{
    QString strTempNumber;
    int length=strNumber.length(); 
    int i;	
    for(i=0;i<length-1;i=i+2)
    {	
	strTempNumber+=strNumber.mid(i+1,1);
	strTempNumber+=strNumber.mid(i,1);
    }
    return strTempNumber;
}

//(String转unicode)
QString Gprs::ToUnicode(QString str)
{	
       const QChar *q;
       QChar qtmp;
       QString str1, strout;
       int num;
       q=str.unicode();
       int len=str.count();
       for(int i=0;i<len;i++)
       {   qtmp =(QChar)*q++;
                   num= qtmp.unicode();
                   if(num<255)
                   strout+="00"; //英文或数字前加"00"
 
                   str1=str1.setNum(num,16);//变成十六进制数
 
                   strout+=str1;
       }
 
 
       return strout;
}


//(unicode转String)
QString Gprs::unicodeTo(QString str)
{
    int temp[400];
    QChar qchar[100];
    QString strOut;
    bool ok;
    int count=str.count();
    int len=count/4;
    for(int i=0;i<count;i+=4)
    {
     temp[i]=str.mid(i,4).toInt(&ok,16);//每四位转化为16进制整型
     qchar[i/4]=temp[i];
     QString str1(qchar, len);
     strOut=str1;
    }
    return strOut;
}

//获得fd的值
int Gprs::getFd()
{
	return fd;
}

//定时器触发（从串口读取数据）
void Gprs::timeout_slot()
{
	if(fd)
    	{
		if(read(fd,buff,sizeof(buff))!=0)
		{  
                        qDebug()<<QString(buff);
	       		ReadMsg(QString(buff));
			resetBuff();
		}
	}	
}

//远程控制操作
void Gprs::doRemoteCtl(QString command){
if(command.compare("$11")){

}
else if(command.compare("$10")){

}
else if(command.compare("$21")){

}
else if(command.compare("$20")){

}
else if(command.compare("$31")){

}
else if(command.compare("$30")){

}
}

//给buff清零
void Gprs::resetBuff(){
memset(buff,0,sizeof(buff));
}

//设置来电标志位
void Gprs::setRingFlag(bool flag){
ringFlag=flag;
}

