#include <IRremote.h>

typedef unsigned int UINT; 
typedef unsigned char UCHAR;

UINT INFARED_PIN = 0x03;

UINT led[4] = {0x09, 0x08, 0x07, 0x06};

IRrecv IR(INFARED_PIN);
decode_results results; 

void setup() {
 
 IR.enableIRIn(); 
 
 for (const int &currentLed : led) 
    pinMode(currentLed, OUTPUT); 
 
};

void lightPattern() {

  UINT cycles = random(10); 
  UINT currentCycle = 0; 

  while (currentCycle < cycles) 
  {
   
    UCHAR possibleLedOutputs[] = {(UCHAR*)"HIGH", (UCHAR*)"LOW"}; 

    for (const int &light : led) 
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
