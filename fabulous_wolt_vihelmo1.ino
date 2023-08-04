// C++ code
//
int trig =2; 
int echo =3; 
int d,t; 
int led1=9 ;
 int led2=10; 
 int led3=11; 
int led4 =5; 
int out1; 
 int out2; 
 int  out3; 
 int out4; 
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2 ,OUTPUT);
   pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop()
{
 
  digitalWrite(trig,0);
  delayMicroseconds(2); 
  digitalWrite(trig,1);
  delayMicroseconds(10); 
  digitalWrite(trig,0);
  t=pulseIn(echo,1); 
 
  d=.0343*(t/2) ; 
out1=map(d,300,10,255,0); 
out2=map(d,300,100,255,0); 
out3=map(d,300,190,255,0); 
out4=map(d,300,260,255,0); 
 
  
  if(d>10&&d<=120){
    analogWrite(led1,out1);
    analogWrite(led2,0);
    analogWrite(led3,0);
    analogWrite(led4,0);
  
  } 
 else if(d>120&&d<200){
  analogWrite(led1,out1);
analogWrite(led2,out2);
 analogWrite(led3,0);
    analogWrite(led4,0);
  
  }
 else if(d>=200&&d<=260){
     analogWrite(led1,out1);
    analogWrite(led2,out2);
  analogWrite(led3,out3);
    analogWrite(led4,0);
  
  }
   else if(d>260)
     {     analogWrite(led1,out1);
    analogWrite(led2,out2);
  analogWrite(led3,out3);    
   analogWrite(led4,out4); 
  
     }}


