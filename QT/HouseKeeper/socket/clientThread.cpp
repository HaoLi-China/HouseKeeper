#include <QtCore>
#include "clientThread.h"

//构造方法
ClientThread::ClientThread(int client_fd,DataBase *db){
database=db;
stopped=false;
clientId=client_fd;

connect( this, SIGNAL(signal_getNewLocation(QString)), database, SLOT(slot_getNewLocation(QString)) );
}

ClientThread::~ClientThread(){
 close(clientId);
}

//run方法
void ClientThread::run()
{
while(!stopped){
        if(recvData(command)){
               int index1=command.indexOf("N:");
               int index2=command.indexOf("P:");
               QString cmd = command.mid(2,index1-2);
               QString name = command.mid(index1+2,index2-index1-2);
               QString pwd = command.mid(index2+2);

		qDebug()<<command;
		qDebug()<<cmd;
		qDebug()<<name;
		qDebug()<<pwd;

               if(database->userChecked(name,pwd.mid(0,pwd.length()-1),"00")||database->userChecked(name,pwd.mid(0,pwd.length()-1),"01")){
               info="succeed";
               }
               else{
               info="failed";
               }
		
		qDebug()<<info;
	
		if (cmd.compare("close")==0) {
		    stop();
		}

		else if (cmd.compare("login")==0) {
		    sendData("login "+info+"\n");
		}
                else if (cmd.compare("openBuzzer")==0) {
                    if(info.compare("succeed")==0){
                    device.open_buzzer();
                    device.set_buzzer_freq(device.getFreq());
		}
		    sendData("openBuzzer "+info+"\n");
		}
                else if (cmd.compare("volumeRise")==0) {
                    if(info.compare("succeed")==0){
                    device.freqRise();
                    device.set_buzzer_freq(device.getFreq());
                    }
		    sendData("volumeRise "+info+"\n");
		}
                else if (cmd.compare("volumeDec")==0) {
                    if(info.compare("succeed")==0){
                    device.freqDec();
                    device.set_buzzer_freq(device.getFreq());
                    }
		    sendData("volumeDec "+info+"\n");
		}
                else if (cmd.compare("closeBuzzer")==0) {
                    if(info.compare("succeed")==0){
                    device.stop_buzzer();
                    }
		    sendData("closeBuzzer "+info+"\n");
		}
		else if(cmd.indexOf("changepwd",Qt::CaseInsensitive)>=0){
                    QStringList strl = cmd.split("/");
		    if(info.compare("succeed")==0){

                    if(database->userUpdate(name,strl.at(2))){
                    sendData("change succeed\n");
                      }
                    else{
                    sendData("change failed\n");
                    }
                    }
                    else{
                    sendData("change failed\n");
                    }
		}
                else if(cmd.indexOf("sendLocation",Qt::CaseInsensitive)>=0){
		    if(info.compare("succeed")==0){
                    QStringList strl = cmd.split("/");
                    database->insertLocation(name,strl.at(1),strl.at(2));
                    emit(signal_getNewLocation(name+"/"+strl.at(1)+"/"+strl.at(2)));
                    //double latitude=(strl.at(1)).toDouble();
                    //double longitude=(strl.at(2)).toDouble();
                    }
                    sendData("sendLocation "+info+"\n");
                }
}
}
}

//结束线程
void ClientThread::stop()
{
    close(clientId);
    stopped = true;
}

//接收数据
int ClientThread::recvData(QString &str)
{
  char buf [MAXRECV+1];
  str = "";

  memset ( buf, 0, MAXRECV + 1 );

  int status = recv(clientId, buf, MAXRECV, 0);
  qDebug()<<status;
  if ( status == -1 )
    {
      printf("status == -1 errno == %s in Socket::recv\n",errno);
      return 0;
    }
  else if( status == 0 )
    {
      stop();
      return 0;
    }
  else
    {
      str =QString(buf);
      return status;
    }
}

//向指定客户端发送数据
bool ClientThread::sendData(QString data)
{
  QByteArray ba = data.toLatin1();
  char *ch = ba.data();
  int status = send(clientId, ch, data.length(), 0);
  if ( status == -1 )
    {
      return false;
    }
  else
    {
      return true;
    }
}

