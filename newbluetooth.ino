int ml1=2;
int ml2=3;
int mr1=4;
int mr2=5;
int enA=9;
int enB=10;
int speed1=150;
void setup() {
  pinMode(ml1,OUTPUT);
  pinMode(ml2,OUTPUT);
  pinMode(mr1,OUTPUT);
  pinMode(mr2,OUTPUT);

  Serial.begin(9600);
}
void forward()
{
 digitalWrite(ml1,HIGH);
 digitalWrite(ml2,LOW);
 digitalWrite(mr1,HIGH);
 digitalWrite(mr2,LOW); 
}
void backward()
{
 digitalWrite(ml1,LOW);
 digitalWrite(ml2,HIGH);
 digitalWrite(mr1,LOW);
 digitalWrite(mr2,HIGH); 
}
void left()
{
 digitalWrite(ml1,LOW);
 digitalWrite(ml2,HIGH);
 digitalWrite(mr1,HIGH);
 digitalWrite(mr2,LOW); 
}
void right()
{
 digitalWrite(ml1,HIGH);
 digitalWrite(ml2,LOW);
 digitalWrite(mr1,LOW);
 digitalWrite(mr2,HIGH); 
}
void arcright()
{
 digitalWrite(ml1,HIGH);
 digitalWrite(ml2,LOW);
 digitalWrite(mr1,LOW);
 digitalWrite(mr2,LOW); 
}
void arcleft()
{
 digitalWrite(ml1,LOW);
 digitalWrite(ml2,LOW);
 digitalWrite(mr1,HIGH);
 digitalWrite(mr2,LOW); 
}
void stop1()
{
 digitalWrite(ml1,LOW);
 digitalWrite(ml2,LOW);
 digitalWrite(mr1,LOW);
 digitalWrite(mr2,LOW); 
}
void loop() {
  // put your main code here, to run repeatedly:
   
   char bt_data=Serial.read();
   
   if(bt_data=='F'){
    forward();
    analogWrite(enA,speed1);
    analogWrite(enB,speed1);
   }
   if(bt_data=='B'){
    backward();
    analogWrite(enA,speed1);
    analogWrite(enB,speed1);
   }
   if(bt_data=='L'){
    left();
    analogWrite(enA,speed1);
    analogWrite(enB,speed1);
   }
   if(bt_data=='R'){
    right();
    analogWrite(enA,speed1);
    analogWrite(enB,speed1);
   }
   if(bt_data=='S'){
    stop1();
    analogWrite(enA,speed1);
    analogWrite(enB,speed1);
   }
   if(bt_data=='I'){
    arcright();
    analogWrite(enA,speed1);
    analogWrite(enB,speed1);
   }
   if(bt_data=='G'){
    arcleft();
    analogWrite(enA,speed1);
    analogWrite(enB,speed1);
   }
}
