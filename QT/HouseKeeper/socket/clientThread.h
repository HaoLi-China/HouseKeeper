#ifndef CLIENTTHREAD_H
#define CLIENTTHREAD_H

#include <QThread>
#include <iostream>
#include <QString>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include "database.h"
#include "device.h"

const int MAXRECV = 500;

class ClientThread:public QThread
{
    Q_OBJECT

public:
    ClientThread(int client_fd,DataBase *db);
    ~ClientThread();
    void stop();
    int recvData(QString &str);
    bool sendData (QString qs);

signals:
    void signal_getNewLocation(QString msg);

protected:
    void run();

private:
volatile bool stopped;
int clientId;
QString command;
DataBase *database;
QString info;
Device device;
};

#endif
