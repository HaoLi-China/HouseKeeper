#include <stdio.h>
#include <QDate>
#include <QSqlQuery>
#include <QDebug>
#include <QVariant>
#include <QSqlError>
#include "database.h"

//构造函数
DataBase::DataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./databases/housekeeper.db");
    if(!db.open())
    {
      qDebug()<<"Failed to open db";
    }
    else{
      qDebug()<<"Succeed to open db";
    }
  
}

//析构函数
DataBase::~DataBase()
{
    QString dbname = db.connectionName();
    db.close();
    QSqlDatabase::removeDatabase(dbname);
}

//向数据库插入传感器数据
void DataBase::slot_insert(ZIGBEE_INFO info)
{
    QSqlQuery query(db);
    QString str = QString("insert into sensor values('%1','%2','%3','%4','%5','%6','%7','%8','%9','%10','%11')")
	    .arg(QDateTime::currentDateTime().toString())
            .arg(info.netFlag)
            .arg(info.pointAddr)
            .arg(info.rootAddr)
	    .arg(info.pointState)
            .arg(info.pointWay)
            .arg(info.port)
            .arg(info.sensorNum)
            .arg(info.sensorID)
	    .arg(info.commandNum)
	    .arg(info.pointData);

    qDebug()<<"DB::insert:"<<str;

    if(!query.exec(str))
    {
        qDebug()<<"Failed to insert";
        qDebug()<<"Error:"<<query.lastError().text();
    }
    query.finish();

}

//从数据库查询传感器数据
QStringList DataBase::slot_query(QString sensorNum,QString sensorID)
{
    QStringList result;
    QString str = QString("select * from sensor where sensornum='%1' and sensorid='%2' order by time desc limit 20").arg(sensorNum).arg(sensorID);

    QSqlQuery query(db);

    qDebug()<<"DB::query:"<<str;

    if(!query.exec(str))
    {
        qDebug()<<"Failed to query";
        qDebug()<<"Error:"<<query.lastError().text();
    }

    //query.first();
    while(query.next())
    {
        QString data=query.value(0).toString()+query.value(1).toString()+query.value(2).toString()
	+query.value(3).toString()+query.value(4).toString()+query.value(5).toString()+query.value(6).toString()
	+query.value(7).toString()+query.value(8).toString()+query.value(9).toString()+query.value(10).toString();
        qDebug()<<data+"\n";
	result.append(data);
    }

    query.finish();
    return result;
}

//验证用户是否存在
bool DataBase::userChecked(QString name,QString pwd,QString type){
    QString str = QString("select * from user where name='%1' and password='%2' and type='%3'").arg(name).arg(pwd).arg(type);

    QSqlQuery query(db);

    qDebug()<<"DB::query:"<<str;

    if(!query.exec(str))
    {
        qDebug()<<"Failed to query";
        qDebug()<<"Error:"<<query.lastError().text();
    }

    //query.first();
    while(query.next())
    {  
    query.finish();
    return true;
    }
    query.finish();
    return false;
}

//更新用户信息表
bool DataBase::userUpdate(QString name,QString pwd,QString id){
    QString str = QString("update user set password='%1' where name='%2' and type='%3'").arg(pwd).arg(name).arg(id);

    QSqlQuery query(db);

    qDebug()<<"DB::update:"<<str;

    if(!query.exec(str))
    {
        qDebug()<<"Failed to query";
        qDebug()<<"Error:"<<query.lastError().text();
        query.finish();
        return false;
    }
    query.finish();
    return true;
}

//更新用户信息表
bool DataBase::userUpdate(QString name,QString pwd){
    QString str = QString("update user set password='%1' where name='%2'").arg(pwd).arg(name);

    QSqlQuery query(db);

    qDebug()<<"DB::update:"<<str;

    if(!query.exec(str))
    {
        qDebug()<<"Failed to query";
        qDebug()<<"Error:"<<query.lastError().text();
        query.finish();
        return false;
    }
    query.finish();
    return true;
}

//增加用户
bool DataBase::addUser(QString name,QString pwd,QString id){
    QSqlQuery query(db);
    QString str = QString("insert into user values('%1','%2','%3')").arg(name).arg(pwd).arg(id);

    qDebug()<<"DB::insert:"<<str;

    if(!query.exec(str))
     {
        qDebug()<<"Failed to insert";
        qDebug()<<"Error:"<<query.lastError().text();
        query.finish();
        return false;
      }

      query.finish();
      return true;
}

//判断用户名是否存在
bool DataBase::hasUser(QString name){
    QSqlQuery query(db);
    qDebug()<<"123";

    QString str = QString("select * from user where name='%1'").arg(name);

    qDebug()<<"DB::query:"<<str;

    if(!query.exec(str))
    {
        qDebug()<<"Failed to query";
        qDebug()<<"Error:"<<query.lastError().text();
    }

    //query.first();
    while(query.next())
    {  
    query.finish();
    return true;
    }
    query.finish();
    return false;
}

//读取相应类型的用户列表
QStringList DataBase::readUserList(QString id){
    QStringList result;
    QString str = QString("select name from user where type='%1'").arg(id);

    QSqlQuery query(db);

    qDebug()<<"DB::query:"<<str;

    if(!query.exec(str))
    {
        qDebug()<<"Failed to query";
        qDebug()<<"Error:"<<query.lastError().text();
    }

    while(query.next())
    {
        result.append(query.value(0).toString());
    }

    query.finish();
    return result;
}

//删除指定用户
bool DataBase::deleteUser(QString name){
    QSqlQuery query(db);
    QString str = QString("delete from user where name='%1'").arg(name);

    qDebug()<<"DB::delete:"<<str;

    if(!query.exec(str))
     {
        qDebug()<<"Failed to delete";
        qDebug()<<"Error:"<<query.lastError().text();
        query.finish();
        return false;
      }

      query.finish();
      return true;
}

//向数据库插入位置数据
void DataBase::insertLocation(QString name,QString latitude,QString longitude)
{
    QSqlQuery query(db);
    QString str = QString("insert into location values('%1','%2','%3','%4')")
	    .arg(name)
            .arg(latitude)
            .arg(longitude)
	    .arg(QDateTime::currentDateTime().toString());

    qDebug()<<"DB::insert:"<<str;

    if(!query.exec(str))
    {
        qDebug()<<"Failed to insert";
        qDebug()<<"Error:"<<query.lastError().text();
    }
    query.finish();
}

//从数据库查询位置数据
QString DataBase::queryLocation(QString name)
{
    QString data;
    QString str = QString("select * from location where name='%1' order by time desc limit 1").arg(name);

    QSqlQuery query(db);

    qDebug()<<"DB::query:"<<str;

    if(!query.exec(str))
    {
        qDebug()<<"Failed to query";
        qDebug()<<"Error:"<<query.lastError().text();
    }

    //query.first();
    while(query.next())
    {
        data=query.value(1).toString()+"/"+query.value(2).toString()+"/"+query.value(3).toString();
        qDebug()<<data;
    }

    query.finish();
    return data;
}

void DataBase::slot_getNewLocation(QString msg){
emit(signal_getNewLocation(msg));
}
