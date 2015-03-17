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
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}

void loop()
{
  Tricolore(1000);
}

void Tricolore(time)
{
  digitalWrite(8,HIGH);
  delay(time);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(time);
  digitalWrite(9,LOW);
  digitalWrite(2,HIGH);
  delay(time);
  digitalWrite(2,LOW);
}
