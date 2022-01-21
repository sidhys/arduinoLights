#include <IRremote.h>

typedef unsigned int uint; 
typedef unsigned char uchar;

uint INFARED_PIN = 0x03;

uint led[4] = {0x09, 0x08, 0x07, 0x06};

IRrecv IR(INFARED_PIN);
decode_results results; 


void setup() {

 IR.enableIRIn(); 

 for (const int &currentLed : led) 
    pinMode(currentLed, OUTPUT); 
 
};

void lightPattern() {

  uint cycles = random(10); 
  uint currentCycle = 0; 

  while (currentCycle < cycles) 
  {
    uchar possibleLedOutputs[] = {(uchar*)"HIGH", (uchar*)"LOW"}; 

    for (const int &light: led) 
      digitalWrite(light, possibleLedOutputs[random(sizeof(possibleLedOutputs))+1]);

    delay(100); 
      
    currentCycle++; 
  };
  
 };

void loop() {
  if(IR.decode(&results)) {
    lightPattern(); 
    IR.resume(); 
   }; 
};
