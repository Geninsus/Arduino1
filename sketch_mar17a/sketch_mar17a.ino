#define ledRouge 8
#define ledJaune 9
#define ledVerte 2
#define ledBleue 3

void setup()
{
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
}
void tricolorLight(int timeoutR, int timeoutJ, int timeoutV)
{
    etatR = digitalRead(8);
    ettJ = digitalRead(9);
    etatV = digitalRead(3);
    
    if(timeoutR < 2000)
    {
      timeoutR = 2000;
    }
    if(timeoutJ < 1000)
    {
      timeoutJ = 1000;
    }
    if(timeoutV < 3000)
    {
       timeoutV = 3000;
    }
    
    if(etatV == LOW && etatJ == LOW)
    {
      digitalWrite(ledRouge, HIGH);
      delay(timeoutR);
    }
    if(etatV == LOW && etatJ == LOW && etatR == HIGH)
    {
      digitalWrite(ledRouge, LOW);
      digitalWrite(ledVerte, HIGH);
      delay(timeoutV);
    }
    if(etatR == LOW && etatV == HIGH)
    {
      digitalWrite(ledJaune, HIGH);
      digitalWrite(ledVerte, LOW);
      delay(timeoutJ); 
    }
    if(etatV == LOW && etatJ == HIGH)
    {
      digitalWrite(ledVerte, LOW);
      digitalWrite(ledJaune, LOW);
    }
}
void loop()
{
   tricolorLight(5000, 3000, 6000);
}
