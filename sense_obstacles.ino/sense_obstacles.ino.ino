#include <Arduino.h>
int trig = 3;
int echo = 2;
int distance;
int time;
int led = 13;
void setup()
{
 Serial.begin(9600);
 pinMode(trig, OUTPUT);
 pinMode(echo, INPUT);
 pinMode(led, OUTPUT);
}

void loop()
{
 digitalWrite(trig, LOW);
 delayMicroseconds(2);
 digitalWrite(trig, HIGH);
 delayMicroseconds(10);
 
 time = pulseIn(echo, HIGH);
 distance = time /29 /2;

 Serial.println(distance);
 if(distance < 10){
   digitalWrite(led, HIGH);
   Serial.println("JOB ABE");
   delay(500);

 }
 else{
   digitalWrite(led, LOW);
 }
 delay(100);

}

//BY JOB ABE
 