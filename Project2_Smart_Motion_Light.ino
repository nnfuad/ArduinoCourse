int relay=8; 
int pir=7;
void setup ()
{
    Serial.begin (9600) ; 
    pinMode (relay, OUTPUT) ; 
    pinMode (pir, INPUT) ;
}
void loop ()
{
    if (digitalRead (pir) ==HIGH) {
    Serial printin ("Motion Detected") ; 
    digitalwrite (relay, HIGH) ;
    }
    else{
    Serial printin ("No Motion Detected") ;
    digitalWrite (relay, LOW);
    }
}