/*
 * main.c -- Main program for the GoAhead WebServer (LINUX version)
 *
 * Copyright (c) GoAhead Software Inc., 1995-2000. All Rights Reserved.
 *
 * See the file "license.txt" for usage and redistribution license requirements
 *
 * $Id: main.c,v 1.5 2003/09/11 14:03:46 bporter Exp $
 */

/******************************** Description *********************************/

/*
 *	Main program for for the GoAhead WebServer. This is a demonstration
 *	main program to initialize and configure the web server.
 */

/********************************* Includes ***********************************/
#include        "sqlite3.h"
#include	"../uemf.h"
#include	"../wsIntrn.h"
#include	<signal.h>
#include	<unistd.h> 
#include	<sys/types.h>
#include	<sys/wait.h>
#include	<stdlib.h>
#ifdef WEBS_SSL_SUPPORT
#include	"../websSSL.h"
#endif

#ifdef USER_MANAGEMENT_SUPPORT
#include	"../um.h"
void	formDefineUserMgmt(void);
#endif


/*********************************** Locals ***********************************/
/*
 *	Change configuration here
 */

static char_t		*rootWeb = T("web");			/* Root web directory */
static char_t		*password = T("");				/* Security password */
static int			port = 80;						/* Server port */
static int			retries = 5;					/* Server port retries */
static int			finished;						/* Finished flag */
static int               pagenum=0;//定义页面号 
/****************************** Forward Declarations **************************/
static double get_wet(char_t *num);
static double get_tem(char_t *num);
static int hextointer(char_t *strin);
static int	aspGetTable(int eid, webs_t wp, int argc, char_t **argv);
static int	aspGetChart(int eid, webs_t wp, int argc, char_t **argv);
static void	backPage(webs_t wp, char_t *path, char_t *query);
static void	goPage(webs_t wp, char_t *path, char_t *query);

static void	checkUser(webs_t wp, char_t *path, char_t *query);//////////////////checkUser()
static void	repasswd(webs_t wp, char_t *path, char_t *query);
static int 	initWebs();
static int	aspTest(int eid, webs_t wp, int argc, char_t **argv);

static void formTest(webs_t wp, char_t *path, char_t *query);
static int  websHomePageHandler(webs_t wp, char_t *urlPrefix, char_t *webDir,
				int arg, char_t *url, char_t *path, char_t *query);
extern void defaultErrorHandler(int etype, char_t *msg);
extern void defaultTraceHandler(int level, char_t *buf);
#ifdef B_STATS
static void printM`emStats(int handle, char_t *fmt, ...);
static void memLeaks();
#endif

/*********************************** Code *************************************/
/*
 *	Main -- entry point from LINUX
 */

int main(int argc, char** argv)
{
/*
 *	Initialize the memory allocator. Allow use of malloc and start 
 *	with a 60K heap.  For each page request approx 8KB is allocated.
 *	60KB allows for several concurrent page requests.  If more space
 *	is required, malloc will be used for the overflow.
 */
	bopen(NULL, (60 * 1024), B_USE_MALLOC);
	signal(SIGPIPE, SIG_IGN);

/*
 *	Initialize the web server
 */
	if (initWebs() < 0) {
		return -1;
	}

#ifdef WEBS_SSL_SUPPORT
	websSSLOpen();
#endif

/*
 *	Basic event loop. SocketReady returns true when a socket is ready for
 *	service. SocketSelect will block until an event occurs. SocketProcess
 *	will actually do the servicing.
 */
	while (!finished) {
		if (socketReady(-1) || socketSelect(-1, 1000)) {
			socketProcess(-1);
		}
		websCgiCleanup();
		emfSchedProcess();
	}

#ifdef WEBS_SSL_SUPPORT
	websSSLClose();
#endif

#ifdef USER_MANAGEMENT_SUPPORT
	umClose();
#endif

/*
 *	Close the socket module, report memory leaks and close the memory allocator
 */
	websCloseServer();
	socketClose();
#ifdef B_STATS
	memLeaks();
#endif
	bclose();
	return 0;
}

/******************************************************************************/
/*
 *	Initialize the web server.
 */

static int initWebs()
{
	struct hostent	*hp;
	struct in_addr	intaddr;
	char			host[128], dir[128], webdir[128];
	char			*cp;
	char_t			wbuf[128];

/*
 *	Initialize the socket subsystem
 */
	socketOpen();

#ifdef USER_MANAGEMENT_SUPPORT
/*
 *	Initialize the User Management database
 */
	umOpen();
	umRestore(T("umconfig.txt"));
#endif

/*
 *	Define the local Ip address, host name, default home page and the 
 *	root web directory.
 */
/*
	if (gethostname(host, sizeof(host)) < 0) {
		error(E_L, E_LOG, T("Can't get hostname"));
		return -1;
	}
	if ((hp = gethostbyname(host)) == NULL) {
		error(E_L, E_LOG, T("Can't get host address"));
		return -1;
	}
	memcpy((char *) &intaddr, (char *) hp->h_addr_list[0],
		(size_t) hp->h_length);
*/
		intaddr.s_addr=inet_addr("127.0.0.1");


/*
 *	Set ../web as the root web. Modify this to suit your needs
 */

	getcwd(dir, sizeof(dir)); 
	if ((cp = strrchr(dir, '/'))) {
		*cp = '\0';
	}
	sprintf(webdir, "%s/%s", dir, rootWeb);
/*
	char temp [20]="../web";
	sprintf(webdir,"%s",temp);
*/


/*
 *	Configure the web server options before opening the web server
 */

	websSetDefaultDir(webdir);
	cp = inet_ntoa(intaddr);
	ascToUni(wbuf, cp, min(strlen(cp) + 1, sizeof(wbuf)));
	websSetIpaddr(wbuf);
	ascToUni(wbuf, host, min(strlen(host) + 1, sizeof(wbuf)));
	websSetHost(wbuf);

/*
 *	Configure the web server options before opening the web server
 */
	websSetDefaultPage(T("login.asp"));
	websSetPassword(password);

/* 
 *	Open the web server on the given port. If that port is taken, try
 *	the next sequential port for up to "retries" attempts.
 */
	websOpenServer(port, retries);

/*
 * 	First create the URL handlers. Note: handlers are called in sorted order
 *	with the longest path handler examined first. Here we define the security 
 *	handler, forms handler and the default web page handler.
 */
	websUrlHandlerDefine(T(""), NULL, 0, websSecurityHandler, 
		WEBS_HANDLER_FIRST);
	websUrlHandlerDefine(T("/goform"), NULL, 0, websFormHandler, 0);
	websUrlHandlerDefine(T("/cgi-bin"), NULL, 0, websCgiHandler, 0);
	websUrlHandlerDefine(T(""), NULL, 0, websDefaultHandler, 
		WEBS_HANDLER_LAST); 

/*
 *	Now define two test procedures. Replace these with your application
 *	relevant ASP script procedures and form functions.
 */
	websAspDefine(T("aspTest"), aspTest);
	websAspDefine(T("aspGetTable"), aspGetTable);

	websAspDefine(T("aspGetChart"), aspGetChart);
	websFormDefine(T("formTest"), formTest);
	websFormDefine(T("checkUser"), checkUser);
	websFormDefine(T("repasswd"), repasswd);

	websFormDefine(T("backPage"), backPage);
	websFormDefine(T("goPage"), goPage);
/*
 *	Create the Form handlers for the User Management pages
 */
#ifdef USER_MANAGEMENT_SUPPORT
	formDefineUserMgmt();
#endif

/*
 *	Create a handler for the default home page
 */
	websUrlHandlerDefine(T("/"), NULL, 0, websHomePageHandler, 0); 
	return 0;
}

static void	backPage(webs_t wp, char_t *path, char_t *query)
{
	if(pagenum==0)
	{
	websRedirect(wp,T("asp/show_table.asp"));
	}
	else
	{
	pagenum--;
	websRedirect(wp,T("asp/show_table.asp"));
	}
	printf("pagenum==%d\n",pagenum);
}
static void	goPage(webs_t wp, char_t *path, char_t *query)
{
	pagenum++;
	websRedirect(wp,T("asp/show_table.asp"));
	printf("pagenum==%d\n",pagenum);
}




static int aspGetTable(int eid, webs_t wp, int argc, char_t **argv)
{
	sqlite3 *db;
	sqlite3_stmt* stmt=NULL;
	char *zErrMsg=0;
	printf("in gettable pagenum==%d",pagenum);
	char *time=NULL;
	char *netflag=NULL;
	char *pointaddr=NULL;
	char *rootaddr=NULL;
	char *pointstate=NULL;
	char *pointway=NULL;
	char *port_2=NULL;
	char *sensornum=NULL;
	char *sensorid=NULL;	
	char *commandnum=NULL;
	char *pointdata=NULL;

	double tempercent;
	double wetpercent;
	
	int rc;
	int nret;
	printf("Open ---housekeeper.db\n");
	rc=sqlite3_open("../../databases/housekeeper.db",&db);
	if(rc)
	{
	fprintf(stderr,"Can't open database:%s\n",sqlite3_errmsg(db));
	sqlite3_close(db);
	websWrite(wp,T("alert(\"Can't open database\")\n"));
	return -1;
	}

	printf("Open success!\n");
	nret=sqlite3_prepare(db,"SELECT * FROM sensor where sensornum='0a' order by time DESC",-1,&stmt,0);//SQL语句
	if(nret!=SQLITE_OK)
	{
		printf("nret error!\n");
		sqlite3_finalize(stmt);
		sqlite3_close(db);
		return -1;
	}
	
	websWrite(wp,T("<table border=1>"));           
	websWrite(wp,T("<tr style=\"color:#551A8B;background:#FFE4E1;text-align:center\">"));
	websWrite(wp,T("<td >日期</td>"));
	websWrite(wp,T("<td >ZigBee网络标识</td>"));
	websWrite(wp,T("<td >节点地址</td>"));
	websWrite(wp,T("<td >根节点地址</td>"));
	websWrite(wp,T("<td >节点状态ID</td>"));
	websWrite(wp,T("<td >节点通道</td>"));
	websWrite(wp,T("<td >通信端口</td>"));
	websWrite(wp,T("<td >传感器类型ID</td>"));
	websWrite(wp,T("<td >相同类型传感器ID</td>"));
	websWrite(wp,T("<td >节点命令序号</td>"));	websWrite(wp,T("<td >温度</td>"));
	websWrite(wp,T("<td >湿度</td>"));
	websWrite(wp,T("</tr>"));
	int i=0,k=0,flag=0;
	while(k<pagenum*32)
	{
	k++;
	nret=sqlite3_step(stmt);
	}
	while(i<32)
	{
	i++;
	nret=sqlite3_step(stmt);
	if(nret!=SQLITE_ROW)
	{
		flag=1;
		websWrite(wp,T("</table>"));
		websWrite(wp,T("<p style=\"color:#f00\">!已经是最后一页!</p>\n"));
		break;
		
	}
	websWrite(wp,T("<tr style=\"text-align:center\">\n"));

	time=sqlite3_column_text(stmt,0);
	websWrite(wp,T("<td >%s</td>"),time);

	netflag=sqlite3_column_text(stmt,1);
	websWrite(wp,T("<td>%s</td>"),netflag);

	pointaddr=sqlite3_column_text(stmt,2);
	websWrite(wp,T("<td>%s</td>"),pointaddr);

	rootaddr=sqlite3_column_text(stmt,3);
	websWrite(wp,T("<td >%s</td>"),rootaddr);

	pointstate=sqlite3_column_text(stmt,4);
	websWrite(wp,T("<td >%s</td>"),pointstate);

	pointway=sqlite3_column_text(stmt,5);
	websWrite(wp,T("<td >%s</td>"),pointway);

	port_2=sqlite3_column_text(stmt,6);
	websWrite(wp,T("<td >%s</td>"),port_2);

	sensornum=sqlite3_column_text(stmt,7);
	websWrite(wp,T("<td >%s</td>"),sensornum);

	sensorid=sqlite3_column_text(stmt,8);
	websWrite(wp,T("<td >%s</td>"),sensorid);

	commandnum=sqlite3_column_text(stmt,9);
	websWrite(wp,T("<td >%s</td>"),commandnum);

	pointdata=sqlite3_column_text(stmt,10);
	char a[10],b[10];
	tempercent=get_tem(pointdata);
	sprintf(a,"%.1f",tempercent);//保留一位精度的字符串
		websWrite(wp,T("<td style=\"color:#f00\">%s</td>"),a);	
	wetpercent=get_wet(pointdata);
	sprintf(b,"%.1f",wetpercent);
		websWrite(wp,T("<td style=\"color:#00f\">%s</td>"),b);

	websWrite(wp,T("</tr>"));
	}
	if(flag==0){
	websWrite(wp,T("</table>"));}
	sqlite3_finalize(stmt);
	sqlite3_close(db);
	printf("close database\n");


}

static void	repasswd(webs_t wp, char_t *path, char_t *query)
{
	char *username=NULL,*pwd=NULL,*newpwd=NULL,*newpwd2=NULL;	
	username=websGetVar(wp,T("username"),T("A"));
	pwd=websGetVar(wp,T("pwd"),T("A"));
	newpwd=websGetVar(wp,T("newpwd"),T("A"));
	newpwd2=websGetVar(wp,T("newpwd2"),T("A"));
	if((!strcmp(newpwd,""))||(!strcmp(pwd,""))||(!strcmp(newpwd2,""))){
		websHeader(wp);
		websWrite(wp, T("<div style=\"margin:20px auto;width:461px;\"><img src=\"../images/error.png\" ></div>"));
		websWrite(wp, T("<p style=\"margin:0px auto;width:360px;\">用户名或密码不能为空！跳转回前页面...<a href=\"../asp/repasswd.asp\"> 点击此处返回 </a></p>"));
		websFooter(wp);
		websDone(wp, 200);	
		
	}else
	if((!strcmp(newpwd,newpwd2)))
	{
		printf("username:%s\n",username);
		printf("pwd:%s\n",pwd);

	    	sqlite3 *db;
		sqlite3_stmt* stmt=NULL;
		char *zErrMsg=0;

		int rc;
		int nret;
		char *sql_username;//get name from database
		char *sql_pwd;
		rc=sqlite3_open("../../databases/housekeeper.db",&db);
		if(rc)
		{
		fprintf(stderr,"Can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
		websWrite(wp,T("alert(\"Can't open database\")\n"));
		
		}

		printf("Opendatabase success!\n");
		//形成查询的sql语句！主要是字符串的拼接！
		char sqlstr[256]="SELECT * FROM user where name=\"";
		strcat(sqlstr,username);
		strcat(sqlstr,"\"");
		char sqlstr2[256]="update user set password=\"";
		strcat(sqlstr2,newpwd);
		strcat(sqlstr2,"\"");
		strcat(sqlstr2,"where name=\"");
		strcat(sqlstr2,username);
		strcat(sqlstr2,"\"");
		printf("%s\n",sqlstr2);

		nret=sqlite3_prepare(db,sqlstr,-1,&stmt,0);//SQL语句
		if(nret!=SQLITE_OK)
		{
			printf("No user!\n");
			sqlite3_finalize(stmt);
			sqlite3_close(db);
			
		}
		else
		{	
			
			nret=sqlite3_step(stmt);
				
			if(nret!=SQLITE_ROW)//查询不到相应的用户名
			{
		websHeader(wp);
		websWrite(wp, T("<div style=\"margin:20px auto;width:461px;\"><img src=\"../images/error.png\" ></div>"));
		websWrite(wp, T("<p style=\"margin:0px auto;width:360px;\">用户名不存在！跳转回前页面...<a href=\"../asp/repasswd.asp\"> 点击此处返回 </a></p>"));
		websFooter(wp);
		websDone(wp, 200);
		return -1;	
		
			}		
			sql_username=sqlite3_column_text(stmt,0);
			sql_pwd=sqlite3_column_text(stmt,1);

			if((!strcmp(sql_username,username))&&(!strcmp(sql_pwd,pwd)))
			{
				sqlite3_exec(db,sqlstr2,NULL,NULL,0);
				websRedirect(wp,T("login.asp"));
				}
			else{				
		websHeader(wp);
		websWrite(wp, T("<div style=\"margin:20px auto;width:461px;\"><img src=\"../images/error.png\" ></div>"));
		websWrite(wp, T("<p style=\"margin:0px auto;width:360px;\">用户名或密码错误！跳转回前页面...<a href=\"../asp/repasswd.asp\"> 点击此处返回 </a></p>"));
		websFooter(wp);
		websDone(wp, 200);	
		
				}
		
			sqlite3_finalize(stmt);
			sqlite3_close(db);
			printf("close  database\n");
		}
	}else
	{	
		websHeader(wp);
		websWrite(wp, T("<div style=\"margin:20px auto;width:461px;\"><img src=\"../images/error.png\" ></div>"));
		websWrite(wp, T("<p style=\"margin:0px auto;width:360px;\">两次输入密码不一致！跳转回前页面...<a href=\"../asp/repasswd.asp\"> 点击此处返回 </a></p>"));
		websFooter(wp);
		websDone(wp, 200);	
	}




}
/******************************************************************************/
/*
 *	Test Javascript binding for ASP. This will be invoked when "aspTest" is
 *	embedded in an ASP page. See web/asp.asp for usage. Set browser to 
 *	"localhost/asp.asp" to test.
 */
static void checkUser(webs_t wp, char_t *path, char_t *query)
{
	pagenum=0;
	char *username=NULL,*pwd=NULL;	
	username=websGetVar(wp,T("username"),T("A"));
	pwd=websGetVar(wp,T("password"),T("A"));
	printf("username:%s\n",username);
	printf("pwd:%s\n",pwd);
	if((!strcmp(username,""))||(!strcmp(pwd,""))){
		websHeader(wp);
		websWrite(wp, T("<div style=\"margin:20px auto;width:461px;\"><img src=\"../images/error.png\" ></div>"));
		websWrite(wp, T("<p style=\"margin:0px auto;width:360px;\">用户名或密码不能为空！跳转回前页面...<a href=\"../login.asp\"> 点击此处返回 </a></p>"));
		websFooter(wp);
		websDone(wp, 200);	
		
	}else{
    	sqlite3 *db;
	sqlite3_stmt* stmt=NULL;
	char *zErrMsg=0;

	int rc;
	int nret;
	char *sql_username;//get name from database
	char *sql_pwd;
	rc=sqlite3_open("../../databases/housekeeper.db",&db);
	if(rc)
	{
	fprintf(stderr,"Can't open database:%s\n",sqlite3_errmsg(db));
	sqlite3_close(db);
	websWrite(wp,T("alert(\"Can't open database\")\n"));
	
	}

	printf("Opendatabase success!\n");
	//形成查询的sql语句！主要是字符串的拼接！
	char sqlstr[256]="SELECT * FROM user where name=\"";
	strcat(sqlstr,username);
	strcat(sqlstr,"\"");

	nret=sqlite3_prepare(db,sqlstr,-1,&stmt,0);//SQL语句
	if(nret!=SQLITE_OK)
	{
		printf("No user!\n");
		sqlite3_finalize(stmt);
		sqlite3_close(db);
		
	}
	else
	{	
	
		nret=sqlite3_step(stmt);
				
		if(nret!=SQLITE_ROW)//查询不到相应的用户名
		{
			websHeader(wp);
			websWrite(wp, T("<div style=\"margin:20px auto;width:461px;\"><img src=\"../images/error.png\" ></div>"));
			websWrite(wp, T("<p style=\"margin:0px auto;width:360px;\">用户名不存在！跳转回前页面...<a href=\"../login.asp\"> 点击此处返回 </a></p>"));
			websFooter(wp);
			websDone(wp, 200);
			return -1;	
			
		}		
		sql_username=sqlite3_column_text(stmt,0);
		sql_pwd=sqlite3_column_text(stmt,1);

		if((!strcmp(sql_username,username))&&(!strcmp(sql_pwd,pwd)))
		{
			websRedirect(wp,T("asp/home.asp"));
			}
		else{
			websHeader(wp);
			websWrite(wp, T("<div style=\"margin:20px auto;width:461px;\"><img src=\"../images/error.png\" ></div>"));
			websWrite(wp, T("<p style=\"margin:0px auto;width:360px;\">用户名或密码错误！跳转回前页面...<a href=\"../login.asp\"> 点击此处返回 </a></p>"));
			websFooter(wp);
			websDone(wp, 200);	
			
			}
	
		sqlite3_finalize(stmt);
		sqlite3_close(db);
		printf("close  database\n");
	}
}

}


static int hextointer1(char num) //'十六进制到十进制的转换
{
	int j;
	if (num=='f')
		j = 15 ;
	else
	if (num == 'e')
		j = 14 ;
	else
	if (num == 'd')
		j = 13 ;
	else
	if (num == 'c')
		j = 12 ;
	else
	if (num == 'b')
		j = 11 ;
	else
	if (num == 'a')
		j = 10 ;
	else
	if (num<='9'&& num>='0' )
		j = num-'0';
	
	return 16*j;
	
}
static int hextointer2(char num) //'十六进制到十进制的转换
{
	int j;
	if (num=='f')
		j = 15 ;
	else
	if (num == 'e')
		j = 14 ;
	else
	if (num == 'd')
		j = 13 ;
	else
	if (num == 'c')
		j = 12 ;
	else
	if (num == 'b')
		j = 11 ;
	else
	if (num == 'a')
		j = 10 ;
	else
	if (num<='9'&& num>='0' )
		j = num-'0';
	
	return j;
	
}
static double get_wet(char num[])//'计算湿度
{
	int n1,n2;
	n1=hextointer1(num[4])+hextointer2(num[5]);
	n2=hextointer1(num[6])+hextointer2(num[7]);
	double sum;
	sum=(n1*256+n2)*1.0/10;
	//printf("sum1==%f\n",sum);
	return sum;
}

static double get_tem(char num[])//'计算温度
{
	
	int n1,n2;
	n1=hextointer1(num[8])+hextointer2(num[9]);
	n2=hextointer1(num[10])+hextointer2(num[11]);
	double sum;
	sum=(n1*256+n2)*1.0/10;
	//printf("sum2==%f\n",sum);
	return sum;
}

static int aspGetChart(int eid, webs_t wp, int argc, char_t **argv)
{
	
	pagenum=0;
	sqlite3 *db;
	sqlite3_stmt* stmt=NULL;
	char *zErrMsg=0;

	int nrow = 0, ncolumn = 0;
	char **azResult; //二维数组存放结果

	char* pointdata=NULL;
	double tempercent;
	double wetpercent;
	
	int rc;
	int nret;
	printf("Open ---housekeeper.db\n");
	rc=sqlite3_open("../../databases/housekeeper.db",&db);
	if(rc)
	{
	fprintf(stderr,"Can't open database:%s\n",sqlite3_errmsg(db));
	sqlite3_close(db);
	websWrite(wp,T("alert(\"Can't open database\")\n"));
	return -1;
	}

	printf("Open success!\n");
	nret=sqlite3_prepare(db,"SELECT * FROM sensor where sensornum='0a'",-1,&stmt,0);//SQL语句
	sqlite3_get_table(db, "SELECT * FROM sensor where sensornum='0a'", &azResult, &nrow, &ncolumn, &zErrMsg);
	if(nret!=SQLITE_OK)
	{
		printf("nret error!\n");
		sqlite3_finalize(stmt);
		sqlite3_close(db);
		return -1;
	}

	printf("%d\n",nrow);
	while(32<nrow)
	{
	nrow--;
	nret=sqlite3_step(stmt);
	}
	int i=0;
	while(1)
	{
	i++;
	nret=sqlite3_step(stmt);
	if(nret!=SQLITE_ROW)
		break;
	
	pointdata=sqlite3_column_text(stmt,10);
		//websWrite(wp,T("<td>%s</td>"),pointdata);
	char a[10];char b[10];

	tempercent=get_tem(pointdata);
	sprintf(a,"%.1f",tempercent);//保留一位精度的字符串
		websWrite(wp,T("%s,"),a);
	
	wetpercent=get_wet(pointdata);
	sprintf(b,"%.1f",wetpercent);
	if(i%9==0)
	{
		websWrite(wp,T("%s,\n"),b);
	}
	else{
		websWrite(wp,T("%s,"),b);
	}
	}


	sqlite3_finalize(stmt);
	sqlite3_close(db);

}
static int aspTest(int eid, webs_t wp, int argc, char_t **argv)
{
	char_t	*name, *address;

	if (ejArgs(argc, argv, T("%s %s"), &name, &address) < 2) {
		websError(wp, 400, T("Insufficient args\n"));
		return -1;
	}
	return websWrite(wp, T("Name: %s, Address %s"), name, address);
}

/******************************************************************************/
/*
 *	Test form for posted data (in-memory CGI). This will be called when the
 *	form in web/forms.asp is invoked. Set browser to "localhost/forms.asp" to test.
 */

static void formTest(webs_t wp, char_t *path, char_t *query)
{
	char_t	*name, *address;

	name = websGetVar(wp, T("name"), T("Joe Smith")); 
	address = websGetVar(wp, T("address"), T("1212 Milky Way Ave.")); 

	websHeader(wp);
	websWrite(wp, T("<body><h2>Name: %s, Address: %s</h2>\n"), name, address);
	websFooter(wp);
	websDone(wp, 200);
}

/******************************************************************************/
/*
 *	Home page handler
 */

static int websHomePageHandler(webs_t wp, char_t *urlPrefix, char_t *webDir,
	int arg, char_t *url, char_t *path, char_t *query)
{
/*
 *	If the empty or "/" URL is invoked, redirect default URLs to the home page
 */
	if (*url == '\0' || gstrcmp(url, T("/")) == 0) {
		websRedirect(wp, T("login.asp"));
		return 1;
	}
	return 0;
}

/******************************************************************************/
/*
 *	Default error handler.  The developer should insert code to handle
 *	error messages in the desired manner.
 */

void defaultErrorHandler(int etype, char_t *msg)
{
#if 0
	write(1, msg, gstrlen(msg));
#endif
}

/******************************************************************************/
/*
 *	Trace log. Customize this function to log trace output
 */

void defaultTraceHandler(int level, char_t *buf)
{
/*
 *	The following code would write all trace regardless of level
 *	to stdout.
 */
#if 0
	if (buf) {
		write(1, buf, gstrlen(buf));
	}
#endif
}

/******************************************************************************/
/*
 *	Returns a pointer to an allocated qualified unique temporary file name.
 *	This filename must eventually be deleted with bfree();
 */

char_t *websGetCgiCommName()
{
	char_t	*pname1, *pname2;

	pname1 = tempnam(NULL, T("cgi"));
	pname2 = bstrdup(B_L, pname1);
	free(pname1);
	return pname2;
}

/******************************************************************************/
/*
 *	Launch the CGI process and return a handle to it.
 */

int websLaunchCgiProc(char_t *cgiPath, char_t **argp, char_t **envp,
					  char_t *stdIn, char_t *stdOut)
{
	int	pid, fdin, fdout, hstdin, hstdout, rc;

	fdin = fdout = hstdin = hstdout = rc = -1; 
	if ((fdin = open(stdIn, O_RDWR | O_CREAT, 0666)) < 0 ||
		(fdout = open(stdOut, O_RDWR | O_CREAT, 0666)) < 0 ||
		(hstdin = dup(0)) == -1 ||
		(hstdout = dup(1)) == -1 ||
		dup2(fdin, 0) == -1 ||
		dup2(fdout, 1) == -1) {
		goto DONE;
	}
		
 	rc = pid = fork();
 	if (pid == 0) {
/*
 *		if pid == 0, then we are in the child process
 */
		if (execve(cgiPath, argp, envp) == -1) {
			printf("content-type: text/html\n\n"
				"Execution of cgi process failed\n");
		}
		exit (0);
	} 

DONE:
	if (hstdout >= 0) {
		dup2(hstdout, 1);
      close(hstdout);
	}
	if (hstdin >= 0) {
		dup2(hstdin, 0);
      close(hstdin);
	}
	if (fdout >= 0) {
		close(fdout);
	}
	if (fdin >= 0) {
		close(fdin);
	}
	return rc;
}

/******************************************************************************/
/*
 *	Check the CGI process.  Return 0 if it does not exist; non 0 if it does.
 */

int websCheckCgiProc(int handle)
{
/*
 *	Check to see if the CGI child process has terminated or not yet.  
 */
	if (waitpid(handle, NULL, WNOHANG) == handle) {
		return 0;
	} else {
		return 1;
	}
}

/******************************************************************************/

#ifdef B_STATS
static void memLeaks() 
{
	int		fd;

	if ((fd = gopen(T("leak.txt"), O_CREAT | O_TRUNC | O_WRONLY, 0666)) >= 0) {
		bstats(fd, printMemStats);
		close(fd);
	}
}

/******************************************************************************/
/*
 *	Print memory usage / leaks
 */

static void printMemStats(int handle, char_t *fmt, ...)
{
	va_list		args;
	char_t		buf[256];

	va_start(args, fmt);
	vsprintf(buf, fmt, args);
	va_end(args);
	write(handle, buf, strlen(buf));
}
#endif

/******************************************************************************/
