
#include "UnoJoy.h"

void setup(){
  setupPins();
  setupUnoJoy();
}

void loop(){
  // Always be getting fresh data
  dataForController_t controllerData = getControllerData();
  setControllerData(controllerData);
}

void setupPins(void){
  // Set all the digital pins as inputs
  // with the pull-up enabled, except for the 
  // two serial line pins
  for (int i = 2; i <= 12; i++){
    pinMode(i, INPUT);
    digitalWrite(i, HIGH);
  }
  pinMode(A4, INPUT);
  digitalWrite(A4, HIGH);
  pinMode(A5, INPUT);
  digitalWrite(A5, HIGH);
}

dataForController_t getControllerData(void){
  
  // Set up a place for our controller data
  //  Use the getBlankDataForController() function, since
  //  just declaring a fresh dataForController_t tends
  //  to get you one filled with junk from other, random
  //  values that were in those memory locations before
  dataForController_t controllerData = getBlankDataForController();
  // Since our buttons are all held high and
  //  pulled low when pressed, we use the "!"
  //  operator to invert the readings from the pins
  controllerData.l1On = !digitalRead(A4); //Red = Left Trigger
  controllerData.r1On = !digitalRead(A5); //Blue = Right Trigger
  
  // Set the analog sticks
  //  Since analogRead(pin) returns a 10 bit value,
  //  we need to perform a bit shift operation to
  //  lose the 2 least significant bits and get an
  //  8 bit number that we can use  
  controllerData.leftStickX = analogRead(A0) >> 2; //Steering Direction of Left Analog Stick = X Axis
  controllerData.leftStickY = 128; //Centers Data Because of Unused
  controllerData.rightStickX = 128; //Centers Data Because of Other Button
  controllerData.rightStickY = 128; //Centers Data Because of Other Button
  
  //controllerData.leftStickY = analogRead(A1) >> 2;
  //controllerData.rightStickX = analogRead(A2) >> 2;
  //controllerData.rightStickY = analogRead(A3) >> 2;
  // And return the data!
  return controllerData;
}
