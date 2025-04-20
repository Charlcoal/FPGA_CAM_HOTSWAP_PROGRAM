#pragma clock 8000000
#include <avr/io.h>
#include "Arduino.h"

#define ENABLE_PIN PB0


void setup () {
  // Calibrate Oscillator per chip to get more accurate timing 
  //(use "Action->Calibrate Clock" to get OSCCAL value)
  OSCCAL = 0x7F; // default (uncalibrated)

  digitalWrite(ENABLE_PIN, HIGH); // disabled
  pinMode(ENABLE_PIN, OUTPUT);
  delay(1000); // in milliseconds
  digitalWrite(ENABLE_PIN, LOW); // enabled
}

void loop () {
}
