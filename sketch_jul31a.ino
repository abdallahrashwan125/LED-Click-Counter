void setup(){
pinMode(9,OUTPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
}

void loop(){
 int M=digitalRead(A0);
 int A=digitalRead(A1);
  
  if(M==1){
analogWrite(3,255);
analogWrite(6,127);
  } 
  else{
    analogWrite(3,0);
analogWrite(6,0);
  }  
   if(A==1){
  analogWrite(9,255);
analogWrite(5,127);
   }
    else{
    analogWrite(9,0);
analogWrite(5,0);
    }
}