#include "FONCTION_HABITACLE_FONCTION_HABITACLE.h"

static const float delayTime = 10; //10ms

// Switches
static const uint8_t leftIndicator = 7;
static const uint8_t rightIndicator = 6;
static const uint8_t warning = 5;

// Potard
static const uint8_t brakePotard = A0;

//LED output
static const uint8_t leftLED = 12;
static const uint8_t rightLED = 11;
static const uint8_t brakeLED = 10;

// Value struct
outC_FONCTION_HABITACLE_FONCTION_HABITACLE outValues;

void setup() {
  Serial.begin(115200);

  pinMode(leftIndicator, INPUT);
  pinMode(rightIndicator, INPUT);
  pinMode(warning, INPUT);

  pinMode(brakePotard, INPUT);

  pinMode(leftLED, OUTPUT);
  pinMode(rightLED, OUTPUT);

  pinMode(brakeLED, OUTPUT);
  
}

void loop()
{

  kcg_int16 brakeInput = analogRead(brakePotard);
  kcg_bool Warning_Input = digitalRead(warning);

  uint8_t leftIndicatorStatus = digitalRead(leftIndicator);
  uint8_t rightIndicatorStatus = digitalRead(rightIndicator);

  kcg_int8 indicatorInput;
  if (leftIndicatorStatus && !rightIndicatorStatus) 
  {
    indicatorInput = 1;
  }
  else if (rightIndicatorStatus && !leftIndicatorStatus)
  {
    indicatorInput = -1;
  }
  else 
  {
    indicatorInput = 0;
  }
  
  // Call to generated code
  FONCTION_HABITACLE_FONCTION_HABITACLE((kcg_int8)indicatorInput, (kcg_bool)Warning_Input, (kcg_int16)brakeInput, &outValues);

  // Writing our exits
  digitalWrite(leftLED, outValues.leftIndicatorSignal);
  digitalWrite(rightLED, outValues.rightIndicatorSignal);
  digitalWrite(brakeLED, outValues.brakeSignal);  

  // Waiting for new refresh
  delay(delayTime);
  
}
