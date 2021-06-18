void setup(){
  size(400,200);
}
void draw(){
  background(20,122,134);
  fill(255);
  ellipse(100,100,180,180);
  fill(255,0,0);
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100,180,180,0,stop);
}
