#ifndef USERLISTCL_H
#define USERLISTCL_H
#include <QObject>

class UserListCL{
public:
UserListCL();
~UserListCL();

public:
QStringList ruRead();//读user文本文件
bool ruWrite(QString str);//向user文本文件中写入内容
bool ruDeleteLine(int lineNum);//在user文本文件中删除内容
bool ruIsHas(QString number);//判断用户是否在user列表中
QStringList rcRead();//读contacts文本文件
QString rcReadLine(int row);//读contacts文本文件某一行
bool rcDeleteLine(int lineNum);//在contacts文本文件中删除内容
bool rcWrite(QString name,QString phoneNum);//向contacts文本文件中写入内容
QString rcIsHas(QString number);//判断号码是否在contacts列表中
bool rmWrite(QString number,QString time,QString msg);//向message文本文件中写入内容
QStringList rmRead();//读message文本文件
bool rmDeleteLine(int index);//在message文本文件中删除内容
QString rmReadLine(int row);//读message文本文件某一条
};

#endif
