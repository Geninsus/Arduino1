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
byte boat1[8];
byte boat2[8];
byte boat3[8];
byte boat4[8];

byte* boats[4] = { boat1,boat2,boat3,boat4 };

struct ship{
  byte type[8];
  int pos;
  int damage;
};

struct ship fleet[4];

void initShip(struct ship fleet[])
{
  int i;
  for(i = 0; i<4; i++)
  {
   //set damage
   fleet[i].damage = 0;
   //set the position
   fleet[i].pos = random(0, 17);
   //set the type
   //fleet[i].type = boats[random(0,4)];
   memcpy(&fleet[i].type, &boats[random(0,4)], 8);
  }
}

void setup(){
  
io.begin();
lcd.clear();
lcd.home();  
createBoat(1,boat1);
createBoat(2,boat2);
createBoat(3,boat3);
createBoat(4,boat4);
initShip(fleet);

}

void loop(){
  lcd.clear();
  lcd.createChar(0, boats[1]); //apprend le caractère à l'écran LCD
  lcd.begin(Display_cols,Display_lines);
  lcd.write((uint8_t) 0);
  delay(1000);
}


void createBoat(int num, byte* boat){
 byte bateau;
 byte white = B00000;
 int i ;
 if(num==4){ bateau = B11110;}
 if(num==3){ bateau = B11100;}
 if(num==2){ bateau = B11000;}
 if(num==1){ bateau = B10000;}
 for(i=0;i<8;i++){boat[i]=bateau;}

}

void tuchBoat(){
  
  
  
}
