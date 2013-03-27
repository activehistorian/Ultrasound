#include "Ultrasonic.h"

Ultrasonic ultrasonic( 12, 13 );

void setup()
{ 
Serial.begin( 9600 ); 
} 

void loop()
{ 
int x = ultrasonic.Ranging(CM);
Serial.println ("distance:");
Serial.println (x);
delay (100);
}
