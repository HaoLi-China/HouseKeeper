#include <QtGui>
#include "userListCL.h"

//构造函数
UserListCL::UserListCL(){

}

//析构函数
UserListCL::~UserListCL(){

}

//读user文本文件
QStringList UserListCL::ruRead(){
 QStringList userList;
 QFile file("./files/userList.txt");
   if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
   {
   QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("read user list failed!"));
   return userList;
   }

   QTextStream fileIn(&file);
   while(!fileIn.atEnd()){
QString user=fileIn.readLine();
userList.append(user);
}

   file.flush();
   file.close();
return userList;
}

//向user我文本文件中写入内容
bool UserListCL::ruWrite(QString str){
 QFile file("./files/userList.txt");
   if(!file.open(QIODevice::Append|QIODevice::Text))
   {
      QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("update user list failed!"));
return false;
   }

   QTextStream fileOut(&file);

   fileOut<<str<<"\n";

   file.flush();
   file.close();
return true;
}

//在user文本文件中删除一行
bool UserListCL::ruDeleteLine(int lineNum){
 QFile file("./files/userList.txt");
   if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
   {
QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("update user list failed!"));
      return false;
   }
   QTextStream fileIn(&file);
QStringList userList;
for(int i=0;i<lineNum;i++){
QString user=fileIn.readLine();
userList.append(user);
}
fileIn.readLine();
while(!fileIn.atEnd()){
QString user=fileIn.readLine();
userList.append(user);
}
   file.flush();
   file.close();

if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
   {
QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("update user list failed!"));
      return false;
   }

 QTextStream fileOut(&file);
  for (int i = 0; i < userList.count(); i++) {
       QString str = static_cast<QString>(userList.at(i));
       fileOut<<str<<"\n";
}

   file.flush();
   file.close();

return true;
}

//判断用户是否在user列表中
bool UserListCL::ruIsHas(QString number){
 QFile file("./files/userList.txt");
   if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
   {
   QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("read user list failed!"));
   }

   QTextStream fileIn(&file);
   while(!fileIn.atEnd()){
QString user=fileIn.readLine();
if(user.compare(number)==0){
   file.flush();
   file.close();
return true;
}
}

   file.flush();
   file.close();
return false;
}

//读contacts文本文件
QStringList UserListCL::rcRead(){
 QStringList userList;
 QFile file("./files/contactsList.txt");
   if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
   {
   QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("read contacts list failed!"));
   return userList;
   }

   QTextStream fileIn(&file);
   while(!fileIn.atEnd()){
QString user=fileIn.readLine();
//QString name=user
userList.append(user);
}

   file.flush();
   file.close();
return userList;
}

//读contacts文本文件某一行
QString UserListCL::rcReadLine(int row){
 int index=0;
 QString sline="null null";
 QFile file("./files/contactsList.txt");
   if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
   {
   QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("read contacts list failed!"));
   return sline;
   }

   QTextStream fileIn(&file);
   while(!fileIn.atEnd()){
QString user=fileIn.readLine();
if(index==row){
sline=user;
}
index++;
}

   file.flush();
   file.close();
return sline;
}

//在contacts文本文件中删除一行
bool UserListCL::rcDeleteLine(int lineNum){
 QFile file("./files/contactsList.txt");
   if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
   {
QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("update contacts list failed!"));
      return false;
   }
   QTextStream fileIn(&file);
QStringList userList;
for(int i=0;i<lineNum;i++){
QString user=fileIn.readLine();
userList.append(user);
}
fileIn.readLine();
while(!fileIn.atEnd()){
QString user=fileIn.readLine();
userList.append(user);
}
   file.flush();
   file.close();

if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
   {
QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("update contacts list failed!"));
      return false;
   }

 QTextStream fileOut(&file);
  for (int i = 0; i < userList.count(); i++) {
       QString str = static_cast<QString>(userList.at(i));
       fileOut<<str<<"\n";
}

   file.flush();
   file.close();

return true;
}

//向contacts文本文件中写入内容
bool UserListCL::rcWrite(QString name,QString phoneNum){
 QFile file("./files/contactsList.txt");
   if(!file.open(QIODevice::Append|QIODevice::Text))
   {
      QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("update contacts list failed!"));
      return false;
   }

   QTextStream fileOut(&file);

   fileOut<<name+" "+phoneNum<<"\n";

   file.flush();
   file.close();
return true;
}

//判断号码是否在contacts列表中
QString UserListCL::rcIsHas(QString number){
QString sname="";
 QFile file("./files/contactsList.txt");
   if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
   {
   QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("read contacts list failed!"));
   }

   QTextStream fileIn(&file);
   while(!fileIn.atEnd()){
QString user=fileIn.readLine();
QStringList strl = user.split(" ");
QString name=static_cast<QString>(strl.at(0));
QString num=static_cast<QString>(strl.at(1));
if(num.compare(number)==0){
   file.flush();
   file.close();
   sname=name;
return sname;
}
}

   file.flush();
   file.close();
return sname;
}

//向message文本文件中写入内容
bool UserListCL::rmWrite(QString number,QString time,QString msg){
 QFile file("./files/message.txt");
   if(!file.open(QIODevice::Append|QIODevice::Text))
   {
      QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("update message list failed!"));
      return false;
   }

   QTextStream fileOut(&file);

   fileOut<<"$$:\n"+number+"\n"+time+"\n"+msg<<"\n";

   file.flush();
   file.close();
return true;
}

//读message文本文件
QStringList UserListCL::rmRead(){
 QStringList userList;
 QString content="";
 QFile file("./files/message.txt");
   if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
   {
   QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("read message list failed!"));
   return userList;
   }

   QTextStream fileIn(&file);
   while(!fileIn.atEnd()){
   QString sline=fileIn.readLine();
   if(sline.compare("$$:")==0){
   if(content.length()>0){
   userList.append(content);
   }
   content="";
   continue;
}
content=content+sline+" ";
}
userList.append(content);

   file.flush();
   file.close();
return userList;
}

//在message文本文件中删除内容
bool UserListCL::rmDeleteLine(int index){
int count=-1;
QString sline="";
QFile file("./files/message.txt");
if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
   {
      QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("update message list failed!"));
      return false;
   }

QTextStream fileIn(&file);
QStringList userList;

   while(!fileIn.atEnd()){
   sline=fileIn.readLine();
   if(sline.compare("$$:")==0){
   count++;
   }
if(count!=index){
userList.append(sline);
}
}
   file.flush();
   file.close();

if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
   {
QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("update message list failed!"));
      return false;
   }

 QTextStream fileOut(&file);
  for (int i = 0; i < userList.count(); i++) {
       QString str = static_cast<QString>(userList.at(i));
       fileOut<<str<<"\n";
}

   file.flush();
   file.close();

return true;
}

//读message文本文件某一条
QString UserListCL::rmReadLine(int row){
 int index=-1;
 QString content="";
 QFile file("./files/message.txt");
   if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
   {
   QMessageBox::warning(0, QObject::tr("Warning:"),QObject::tr("read message list failed!"));
   return content;
   }

QTextStream fileIn(&file);
   while(!fileIn.atEnd()){
   QString sline=fileIn.readLine();
   if(sline.compare("$$:")==0){
   if(index==row){
   return content;
   }
   index++;
   content="";
   continue;
}
content=content+sline+"\n";
}

   file.flush();
   file.close();
return content;
}
