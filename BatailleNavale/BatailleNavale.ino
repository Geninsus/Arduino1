  // Include ISEN libraries
#include <ISEN.h>
#include <LabIsen-2009.h>
#include <ISL12026.h>
#include <MCP23X08.h>

// Include Arduino libraries
#include <Wire.h>
#include <LiquidCrystal.h> 
# define PIN_POT 3


IOstd io;
ISENLiquidCrystal lcd;
char carre = 255;
byte bar1[8] = {
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B00000
};
byte bar2[8] = {
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
    B00000
};
byte demibar[8] = {
    B10000,
    B10000,
    B10000,
    B00000,
    B00000,
    B00000,
    B00000
};



void setup(){
}

void loop(){
  
}
