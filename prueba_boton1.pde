import processing.serial.*; 
import controlP5.*;
ControlP5 boton;
Serial puerto;
int mensaje;
void setup(){
size(600, 400);
puerto = new Serial(this,Serial.list()[1],9600); 
}
void draw(){ background(100);textSize(20);
fill(255,255,255);
text("valor:"+ mensaje ,10,15);
}
void serialEvent(Serial puerto){
   mensaje= puerto.read();
   
}