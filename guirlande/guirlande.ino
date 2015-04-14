# define LedRouge 8 // Led red
# define LedJaune 9 // Led yellow
# define LedVerte 2 // Led green
# define LedBleue 3 // Led blue
int tab[8]={0,1,0,1,0,1,0,1};
int deb=0,i=0;
byte table = B01010101;
byte mask = B00000001;
void setup(){
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
}

void loop(){
  if(deb==8){
    deb=0;
  }else{
  deb=deb+1;
  }
  synch(deb,tab);
   
  
}

void synch(int deb, int tab[]){
  
 int deb1;
 if(deb>8){deb1=deb-8;}
 else{deb1=deb;}
 

 if(tab[deb1]==1){
    digitalWrite(8,HIGH);
   }else{
    digitalWrite(8,LOW);
   }
   
   //delay(1000);
   
   if(tab[deb1+1]==1){
    digitalWrite(9,HIGH);
   }else{
    digitalWrite(9,LOW);
   }
   
   //delay(1000);
   
   if(tab[deb1+2]==1){
    digitalWrite(2,HIGH);
   }else{
    digitalWrite(2,LOW);
   }
   
   //delay(1000);
   
   if(tab[deb1+3]==1){
    digitalWrite(3,HIGH);
   }else{
    digitalWrite(3,LOW);
   }
   
   delay(100); 
}

void synchByte(int deb, byte bite){
 byte result = bite;

result = result >>1;
if(result * mask == 1){
    digitalWrite(8,HIGH);
}else{
  digitalWrite(8,LOW);
}


result = result >>1;
if(result * mask == 1){
    digitalWrite(9,HIGH);
}else{
  digitalWrite(9,LOW);
}


result = result >>1;
if(result * mask == 1){
    digitalWrite(2,HIGH);
}else{
  digitalWrite(2,LOW);
}


result = result >>1;
if(result * mask == 1){
    digitalWrite(2,HIGH);
}else{
  digitalWrite(3,LOW);
}

delay(500);
}
