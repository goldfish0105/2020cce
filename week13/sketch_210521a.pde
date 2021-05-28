void setup(){
  size(1024, 400);
  textFont(createFont("標楷體",50));
  
}
void draw(){
  background(202, 223, 232);
  textSize(50);
  int h=hour(),m=minute(),s=second();
  text("Now"+h+":"+m+":"+s,100,100);
  int total=h*60*60+m*60+s;
  text("總秒數:"+total,100,200);
  int total2=13*60*60+30*60+0;
  int ans=total2-total;
  int hh=ans/60/60%60,mm=ans/60%60,ss=ans%60;
  text("還剩下:"+hh+":"+mm+":"+ss,100,300);
}
