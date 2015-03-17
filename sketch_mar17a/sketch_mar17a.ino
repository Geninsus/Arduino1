# define LedRouge 8 // Led red
# define LedJaune 9 // Led yellow
# define LedVerte 2 // Led green
# define LedBleue 3 // Led blue 
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);  
}

void loop()
{
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
}
