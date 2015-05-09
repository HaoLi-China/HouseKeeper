#include <QtGui/QApplication>
#include <QTextCodec>
#include "main.h"
#include "login.h"
#include "socket_server.h"
#include "database.h"
#include "zigbee.h"
#include "gprs.h"

//构造函数
Main::Main(DataBase *db)
{
database=db;
Socket_server *server=new Socket_server();
connect(server,SIGNAL(signal_getNewCon(int)),this,SLOT(slot_getNewCon(int)));//获得新的客户端连接和相应的槽函数
server->start();
}

//析构函数
Main::~Main()
{

}

//得到一个新的socket连接
void Main::slot_getNewCon(int client_fd){
ClientThread *client=new ClientThread(client_fd,database);
client->start();
}

//程序入口，Main方法
int main(int argc, char *argv[])
{
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    QApplication a(argc, argv);
    DataBase *database = new DataBase();
    Gprs *gprs=new Gprs();
    ZigBee *zigBee=new ZigBee(database,gprs);
    new Main(database);
    Login loginView(0,database,zigBee,gprs);
    loginView.show();
    return a.exec();
}
