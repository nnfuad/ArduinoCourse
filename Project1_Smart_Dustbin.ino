#include<Servo.h>
int distance_Function(int echo, int trig);
Servo myservo; 
int echo=10, trig=11;
void setup()
{
    Serial.begin(9600); 
    myservo .attach(12);
    pinMode (echo, INPUT) ;
    pinMode(trig, OUTPUT);
}

void loop(){
    if(distance_Function(echo, trig)<30)
    {
    myservo.write(90);
    delay (2000) ;
    } 
    if(distance_Function(echo, trig)<30 && distance_Function(echo, trig)>200)
    {
    myservo.write(0);
    }
}
int distance_Function(int echo, int trig){
digitalwrite(trig, LOW);
delayMicroseconds (2);
digitalWrite(trig,HIGH);
delayMicroseconds (10);
digitalWrite(trig, LoW);

int duration=pulseIn(echo,HIGH);
int distance=(0.034*duration)/2; 
return distance;
}