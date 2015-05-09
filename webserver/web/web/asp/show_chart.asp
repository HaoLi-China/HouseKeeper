<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html" charset="UTF-8" />
<meta http-equiv="refresh" content="20">
<title>可视化图形</title>
<link rel="stylesheet" href="/css/reset.css" type="text/css"  />
<link rel="stylesheet" href="/css/shouye.css" type="text/css" />

 <link rel="stylesheet" href="/css/demos.css" type="text/css" media="screen" />
    
    <script type="text/javascript" src="/libraries/RGraph.common.core.js" ></script>
    <script type="text/javascript" src="/libraries/RGraph.bar.js" ></script>
    <script type="text/javascript" src="/libraries/RGraph.line.js" ></script>
    <!--[if lt IE 9]><script src="/support/excanvas.js"></script><![endif]-->
    <!--[if lt IE 9]><script src="/support/canvas.test.js"></script><![endif]-->
<style type="text/css">
#left{
width:80px;
height:470px;
}
#right{
width:80px;
height:470px;
}
#tmp2{
margin-top:30px;
}
.button {
color:#333;
background:#fff;
height:30px;
}
#b1{
margin-left:300px;
}
#b2{
margin-left:50px;
}
#mis{
visibility:hidden;
width:800px;
}
</style>

<script type="text/javascript">
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

document.getElementById('time').innerHTML=currentTime;
//document.title="<font-size=>"+currentTime;
setTimeout('date_time()',500);
}
</script>

</head>

<body onload="starttime()">
	<div id="main">
    	<div id="head">
        	<div id="hd1">
            	<img src="/images/banner.jpg" id="head1">
            </div>
         	<div id="hd2">	
            	<ul id="nav">
            		<li><a href="home.asp">首页</a></li>
			<li>|</li>
             	    <li><a href="show_table.asp">历史记录</a></li>
			<li>|</li>
              	    <li><a href="#">可视化图形</a></li>
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
                <div id="tmp1">
                  <div id="time"></div>
                  <span >
                  <input class="button" id="b1" type="submit" value="柱形图展示"  onclick="draw1()">
                  <input class="button" id="b2" type="submit" value="线形图展示"  onclick="draw2()">
                  </span>
                </div>
       
                <div id="tmp2">  
		<canvas id="cvs" width="700" height="300" style="margin-top:10px;background-color:#fff;"></canvas>
                 <div style="margin-left:200px">
                     <span><img src="/images/red.png" style="display:inline;vertical-align:middle">:温度(°C)</img></span>
                     <span><img src="/images/green.png" style="display:inline;vertical-align:middle">:湿度(%)</img></span>
		    
                   </div>
		 <div id="mis"><% aspGetChart();%></div>
                 </div>  
            </div>
            <div id="right"></div>
  		
        </div>
  

   <script>
    var str;
    var str1=new Array();
    var str2=[];
    var str3=[];
 	str=document.getElementById("mis").innerHTML;
	str1=str.split(",");
	for(var i=0,j=0;j<str1.length-1;i++,j++)
	{
	str2[i]=parseFloat(str1[j]);
	j++;
	str3[i]=parseFloat(str1[j]);
	}

          function draw_charts1(b,c)
        {

            var RG        = RGraph;
            var canvas    = document.getElementById("cvs");
            RG.Clear(canvas);

            var data=[[b[0],c[0]],[b[1], c[1]],[b[2], c[2]],[b[3], c[3]],[b[4], c[4]],[b[5], c[5]],[b[6],c[6]]
            ,[b[7],c[7]],[b[8],c[8]],[b[9], c[9]],[b[10], c[10]],[b[11], c[11]],[b[12], c[12]],[b[13], c[13]],[b[14],c[14]],[b[15],c[15]],[b[16], c[16]],[b[17], c[17]],[b[18], c[18]],[b[19], c[19]],[b[20], c[20]],[b[21], c[21]],[b[22], c[22]],[b[23], c[23]],[b[24],c[24]],[b[25],c[25]],[b[26], c[26]],[b[27], c[27]],[b[28], c[28]],[b[29], c[29]],[b[30], c[30]],[b[31], c[31]]];
            var bar4 = new RGraph.Bar('cvs', data)
		.Set('ymax', 100)
                .Set('xmax', 365)
                .Set('colors', ['#ff0000', '#98ED00'])
                .Set('labels', ['01','02','03','04', '05', '06','07', '08', '09', '10', '11','12','13','14','15','16','17','18','19','20','21','22','23','24','25','26','27','28','29','30','31','32'])
                .Set('numyticks', 10)
                .Set('ylabels.count', 5)
                .Set('gutter.left', 50)
                //.Set('variant', '3d')
                .Set('strokestyle', 'transparent')
                .Set('hmargin.grouped', 0)
                .Set('scale.round', true)
                //.Set('title', '柱形图展示')
                .Set('xaxispos', 'center')
                //.Set('title.yaxis', '温度（℃）/ 湿度（％）')
                //.Set('title.vpos', 0.7)
                //.Set('title.yaxis.pos', 0.4)
                .Set('background.grid.autofit.numvlines', 32)
                 .Set('background.grid.autofit.numhlines', 10)
                .Draw();
   
           }
           function draw_charts2(b,c)
           {
               var RG        = RGraph;
                var canvas    = document.getElementById("cvs");
                RG.Clear(canvas);
                var line = new RGraph.Line('cvs', b, c)
                .Set('ymax', 100)
                .Set('xmax', 365)
                .Set('labels', ['01','02','03','04','05', '06','07', '08', '09', '10','11','12','13','14','15','16','17','18','19','20','21','22','23','24','25','26','27','28','29','30','31','32'])
                 .Set('numyticks', 10)
                 .Set('ylabels.count', 5)
                 .Set('gutter.left', 50)
                 //.Set('strokestyle', 'transparent')
                .Set('hmargin.grouped', 0)
                //.Set('scale.round', true)
                //.Set('title', '线形图展示')
                .Set('xaxispos', 'center')
                //.Set('title.yaxis', '温度（℃）/ 湿度（％）')
                //.Set('title.vpos', 0.7)
                //.Set('title.yaxis.pos', 0.4)
                .Set('background.grid.autofit.numvlines', 32)
                .Set('background.grid.autofit.numhlines', 10)
                //.Set('labels.position.x', 4)
                .Set('numxticks', 32)
                //.Set('linewidth', 1)           
               // .Set('title.xaxis.pos', 0.4)                
                //.Set('shadow', true)
  
                .Set('scale.round', true)

                .Draw();
        }

        
        function  draw1()
            {
           
            draw_charts1(str2,str3);
            //int2=window.clearInterval(int2);
           }
           function  draw2()
            { 
            draw_charts2(str2,str3);

            //int1=window.clearInterval(int1);
           }
 
        window.onload = function ()
        {
            date_time();
   		draw_charts1(str2,str3);
		
         }
    </script>  
   

   
  
</body>
</html>
				


