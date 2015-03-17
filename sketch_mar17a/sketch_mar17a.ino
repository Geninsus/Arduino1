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
    if(timeoutR < 2000)
    {
      timeout = 2000;
    }
    if(timeoutJ < 1000)
    {
      timeoutJ = 1000;
    }
    if(timeoutV < 3000)
    {
       timeoutV = 3000;
    }
    digitalWrite(ledRouge, HIGH);
    delay(timeoutR);
    
    digitalWrite(ledRouge, LOW);
    digitalWrite(ledVerte, HIGH);
    delay(timeoutV);
    
    digitalWrite(ledJaune, HIGH);
    digitalWrite(ledVerte, LOW);
    delay(timeoutJ);
    
    digitalWrite(ledVerte, LOW);
    digitalWrite(ledJaune, LOW);
}
void loop()
{
   tricolorLight(2000, 1000, 2000);
}
