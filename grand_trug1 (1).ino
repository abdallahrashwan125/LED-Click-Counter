int M=0;
void setup(){
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(7,INPUT);  
}

void loop()
{
  if(digitalRead(7)==1){
  M++;
  if(M==1){
    digitalWrite(8,1);
  }
    if(M==2){
    digitalWrite(8,1);
    digitalWrite(9,1);
  }
    if(M==3){
    digitalWrite(8,1);
    digitalWrite(9,1); 
    digitalWrite(10,1);
  }
  
    if(M==4){
    digitalWrite(8,0);
    digitalWrite(9,0); 
    digitalWrite(10,0);
    delay(1000);
      M=M-4;
  }
  
delay(500);
}
}