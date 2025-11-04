// selfDeine.h
#include "./std.h"
#include "lcd1602.h"

#define LED_LIGHT_ONCE 0
#define LED_LIGHT_ALWAYS 1

#define LED_LIGHT_TYPE int

// util function
void Delay100ms();
void DelayXms(unsigned int xms);

// LED function
void lightOneLed(LED_LIGHT_TYPE type);
void flickerOneLed(LED_LIGHT_TYPE type);
void movingLightDisplay1();
void movingLightDisplay2();
void pressLedOn();
void swithControlLed();
void Led2Bitmoving();
void keyControlLedLightRight();
void operationLCD();
void staticDigitalShow();
void showNumV2(int position, num);
void key01();



