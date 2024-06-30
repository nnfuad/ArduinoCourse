int gas_sensor = A0, Flame_sensor = 7, buzzer = 5;
void setup() {
    Serial. begin (9600);
    pinMode (buzzer, OUTPUT) ; 
    pinMode (flame_sensor, INPUT) ;
}
void loop()
{
    if(!digitalRead(flame_sensor)){
        Serial.print("Fire Detected"); 
        digitalwrite(buzzer, HIGH) ;
    }
    else{
        Serial.print("No Fire Detected" );
        digitalwrite(buzzer, LOW);
    }
    if(analogRead (A0) >230){
        Serial.print(" Smoke Detected"); digitalwrite(buzzer, HIGH) ;
    }
    else{
        Serial.print(" Smoke not Detected"); 
        digitalwrite(buzzer, LOW) ;
    }
    Serial.println("");
}