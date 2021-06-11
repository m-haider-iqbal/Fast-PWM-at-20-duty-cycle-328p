//Fast PWM at 20% duty cycle

#include <Arduino.h>
void setup() 
{
  
//Timer Initialize
 TCCR0A = (1 << COM0A1); // 7 BIT
 TCCR0A |= (1 << WGM01) | (1 << WGM00); // 0 , 1 BIT
 TCCR0B = ( 1 << CS01); // PRESCALOR 8 BIT 
 OCR0A = 51; 
 DDRD = 1 << 6;
}

void loop()
{
}

// M Haider Iqbal
