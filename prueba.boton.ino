int boton = 6;
int mensaje = 0;
boolean estado, lock=false;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(boton, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
estado = digitalRead(boton);
Serial.print(estado);
if(estado==false && lock== false){
  Serial.write(estado);
  lock = true;  
  }
  if (Serial.available()>0){
    
    }
}
