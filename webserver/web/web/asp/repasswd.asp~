<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html" charset="UTF-8" />
<title>修改密码</title>
<link rel="stylesheet" href="/css/reset.css" type="text/css">
<link rel="stylesheet" href="/css/shouye.css" type="text/css">
<style type="text/css">
#main{
margin-top:20px;
width:600px;
height:500px;
background:url(/images/passbg2.png);}
#form1
{
width:300px;
height:200px;
margin:0px auto;
margin-top:30px;
}

input{
margin-top:10px;width:200px;
}

#button1{
margin-left:75px;
width:50px;
}
#cancel{
margin-top:20px;
margin-left:75px;
width:50px;
}
</style>
</head>

<body>
<div id="main">
	<img src="/images/passbg.png" style="margin:0px auto;"/>

	<p style="text-align:center;font-size:20px;color:white;">修改密码</p>

    	<form id="form1" action=/goform/repasswd  method=POST>

      <div style="width:200px;margin:0px auto;">
	<input name="username" type="text" value="用户名" style="color: gray;"  
            onfocus="if (value =='用户名'){value =''}"  
            onblur="if (value ==''){value='用户名'}" />  

	<input  type="text" value="密码" style="color: gray;" id="tx"   />
	<input  name="pwd" type="password" style="display:none;" id="pwd" />

	<input  type="text" value="新密码" style="color: gray;" id="tx2"   />
	<input  name="newpwd" type="password" style="display:none;" id="pwd2" />

	<input  type="text" value="确认新密码" style="color: gray;" id="tx3"   />
	<input  name="newpwd2" type="password" style="display:none;" id="pwd3" />
	
        <div >      
            <input type=submit  id="button1" value="确定">
		<p style="color:white;margin-top:20px;">修改密码成功后直接回到登录页! 请使用新密码登录!</p>
	</div>
	</div>            
        </form>
	<div style="width:200px;margin:0px auto;">
	<form id="form2">
	<input type=submit id="cancel" value="取消" onclick="window.location='home.asp';return false;"/>
	</form>
	</div>
	
</div>
<script type="text/javascript">
	var tx = document.getElementById("tx"), 
	pwd = document.getElementById("pwd");
	var tx2 = document.getElementById("tx2"), 
	pwd2 = document.getElementById("pwd2");
	var tx3 = document.getElementById("tx3"), 
	pwd3 = document.getElementById("pwd3");

	tx.onfocus = function(){
	if(this.value != "密码") return;
	this.style.display = "none";
	pwd.style.display = "";
	pwd.value = "";
	pwd.focus();
	}
	pwd.onblur = function(){
	if(this.value != "") return;
	this.style.display = "none";
	tx.style.display = "";
	tx.value = "密码";
	}
	tx2.onfocus = function(){
	if(this.value != "新密码") return;
	this.style.display = "none";
	pwd2.style.display = "";
	pwd2.value = "";
	pwd2.focus();
	}
	pwd2.onblur = function(){
	if(this.value != "") return;
	this.style.display = "none";
	tx2.style.display = "";
	tx2.value = "新密码";
	}
	tx3.onfocus = function(){
	if(this.value != "确认新密码") return;
	this.style.display = "none";
	pwd3.style.display = "";
	pwd3.value = "";
	pwd3.focus();
	}
	pwd3.onblur = function(){
	if(this.value != "") return;
	this.style.display = "none";
	tx3.style.display = "";
	tx3.value = "确认新密码";
	}
	
</script>
</body>
</html>
