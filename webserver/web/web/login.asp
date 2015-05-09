<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>login</title>
<link rel="stylesheet" href="/css/reset.css">
<link rel="stylesheet" href="/css/shouye.css">
<style type="text/css">
	#main{
	background:url(/images/login.jpg); 
	width:960px;
	height:722px;
        }
	#p1{
        display:inline;
        color:white;
	margin-left:100px;
	margin-top:40px;
        line-height:50px;
	font-size:18;
        }
    #p2{
    display:inline;
    color:white;
    margin-left:20px;
	margin-top:40px;
	font-size:18;
    }
    #button{
    width:60px;
    height:25px;
    margin-left:20px;
margin-top:40px;
    color:white;
    background:url();
    }


</style>
<% language=javascript %>
</head>
<body>
	<div id="main">
    	<form  action=/goform/checkUser id="fo" method=POST>
            <p id="p1">用户名：<input  type=text name=username >
            </p>
            <p id="p2">密码：<input type=password name=password >                
            </p>
            <input type=submit name=登陆 id="button" value="登陆">
            
        </form>

    </div>

</body>
</html>
