   function get_old(a)
        {
             var xmlhttp,back;
        if (window.XMLHttpRequest)
          {// code for IE7+, Firefox, Chrome, Opera, Safari
          xmlhttp=new XMLHttpRequest();
          }
        else
          {// code for IE6, IE5
          xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
          }
        xmlhttp.onreadystatechange=function()
          {  
          if (xmlhttp.readyState==4 && xmlhttp.status==200)
            {
                back=xmlhttp.responseText;
            }
          }    
        xmlhttp.open("GET","get_oldpass.asp?user="+a,false);
        xmlhttp.send();  
        return back;
        }


    function updata_pass(a,b)//验证用户名和密码
    {
        var xmlhttp,back;
        if (window.XMLHttpRequest)
          {// code for IE7+, Firefox, Chrome, Opera, Safari
          xmlhttp=new XMLHttpRequest();
          }
        else
          {// code for IE6, IE5
          xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
          }
        xmlhttp.onreadystatechange=function()
          {  
          if (xmlhttp.readyState==4 && xmlhttp.status==200)
            {
                back=xmlhttp.responseText;

                 alert("修改密码成功！下次登录请使用新密码！");
                return true;
            }
          }    
        xmlhttp.open("GET","new_pass.asp?user="+a+"&passwd="+b,false);
        xmlhttp.send();     
} 
 
 function new_pass(user){
 
   
   var old_pass=get_old(user);

        var old_pass_inp=prompt("旧密码：");
        if(old_pass==old_pass_inp)
        {
            var new_pass=prompt("新密码：");
            if(new_pass==null||new_pass=="")
            {
                alert("密码不能为空！请重新操作！");
               // return false;  
             }
              else
              {
                var new_pass2=prompt("再次输入新密码：");
                if(new_pass2==null||new_pass2=="")
                {
                    alert("密码不能为空！请重新操作！");
                    //return false;
                }
                else
                {
                    if(new_pass==new_pass2)
                    {
                       return updata_pass(user,new_pass);
                     }
                     else
                     {
                         alert("两次输入密码不一致！请重新操作！");
                      }
                    // return false;
                 }
              }
         }
         else
         {
            alert("旧密码错误！");
            //return false;
         }
         return false;
        }
   