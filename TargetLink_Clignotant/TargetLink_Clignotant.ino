#include "FONCTION_HABITACLE.h"

static const float delayTime = 10; //ms

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

  Sa1_Brake_Input = analogRead(brakePotard);
  Sa1_Warning_Input = digitalRead(warning);

  uint8_t leftIndicatorStatus = digitalRead(leftIndicator);
  uint8_t rightIndicatorStatus = digitalRead(rightIndicator);

  if (leftIndicatorStatus && !rightIndicatorStatus) 
  {
    Sa1_Indicator_Input = 1;
  }
  else if (rightIndicatorStatus && !leftIndicatorStatus)
  {
    Sa1_Indicator_Input = -1;
  }
  else 
  {
    Sa1_Indicator_Input = 0;
  }
  
  // Call to generated code
  FONCTION_HABITACLE();

  // Writing our exits
  digitalWrite(leftLED, Sa1_leftIndicatorSignal);
  digitalWrite(rightLED, Sa1_rightIndicatorSignal);
  digitalWrite(brakeLED, Sa1_brakeSignal);  

  // Waiting for new refresh
  delay(delayTime);
  
}
