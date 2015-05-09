<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta http-equiv="refresh" content="20" />
<title>历史记录</title>
<link rel="stylesheet" href="/css/reset.css" type="text/css"  />
<link rel="stylesheet" href="/css/shouye.css" type="text/css" />
    <!--[if lt IE 9]><script src="/support/excanvas.js"></script><![endif]-->
    <!--[if lt IE 9]><script src="/support/canvas.test.js"></script><![endif]-->
<style type="text/css">
#left{
width:80px;
height:698px;
}
#right{
width:80px;
height:698px;
}
#tmp{
height:698px;
}
#tmp1{
width:800px;
margin-left:10px;
}

form{
display:inline;
}
#backpage{
margin-top:10px;
margin-left:280px;
border:0px;
background:white;
}
#backpage:hover{
cursor:hand ;
color:orange;
text-decoration:underline;
}
#gopage{
background:white;
border:0px;
margin-top:10px;
margin-left:50px;
}
#gopage:hover{
cursor:hand;
color:orange;
text-decoration:underline;
}

</style><script>

function date_time(){
var date = new Date(); 
this.year = date.getFullYear(); 
this.month = date.getMonth() + 1; 
this.date = date.getDate(); 
this.day = new Array("星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六")[date.getDay()]; 
this.hour = date.getHours() < 10 ? "0" + date.getHours() : date.getHours(); 
this.minute = date.getMinutes() < 10 ? "0" + date.getMinutes() : date.getMinutes(); 
this.second = date.getSeconds() < 10 ? "0" + date.getSeconds() : date.getSeconds(); 
var currentTime = this.year + "年" + this.month + "月" + this.date + "日 " + this.hour + ":" + this.minute + ":" + this.second + " " + this.day; 

document.getElementById('tmp1').innerHTML=currentTime;
//document.title="<font-size=>"+currentTime;
setTimeout('date_time()',500);


}
</script>
  

</head>

<body>
	<div id="main">
    	<div id="head">
        	<div id="hd1">
            	<img src="/images/banner.jpg" id="head1">
            	</div>
         	<div id="hd2">	
		    	<ul id="nav">
		    	    <li><a href="home.asp">首页</a></li>
				<li>|</li>
		     	    <li><a href="#">历史记录</a></li>
				<li>|</li>
		      	    <li><a href="show_chart.asp">可视化图形</a></li>
				<li>|</li>
		     	    <li><a href="result_show.asp">功能模块</a></li>
				<li>|</li>
		     	    <li><a href="technical_note.asp">技术说明</a></li>
				<li>|</li>
		            <li><a href="about_us.asp">关于我们</a></li>
		    	</ul>
			<select onchange="window.location=this.value;">
			<option value="#" selected="selected">-请选择-</option>
			<option value="repasswd.asp">修改密码</option>
			<option value="../login.asp">退出登录</option></select>
           	 </div>
        </div>
        <div id="bd">
            <div id="left"></div>
        	<div id="tmp">
		        <div id="tmp1"></div>
		        
			<div id="table">
			<% aspGetTable(); %>
			</div>
	  		<form action=/goform/backPage  method=POST>
				<input type=submit  id="backpage" name=backPage  value="<<上一页">
			</form>
			<form action=/goform/goPage  method=POST>
				<input type=submit id="gopage" name=nextPage  value="下一页>>">
			</form>
			
           
            	</div>
            <div id="right"></div> 

        </div>

		
			

    </div>
<script>
var str;
var str1=new Array();
var string=document.getElementById("table").innerHTML;
str1=string.split("!");
str=str1[1];
function button()
{
	if(str=="已经是最后一页")
	{
	document.getElementById('gopage').style.display="none";
	}
}
window.onload=function(){
   date_time();
	button();
}
</script>
</body>
</html>
				


