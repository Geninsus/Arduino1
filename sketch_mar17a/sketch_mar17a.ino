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
void tricolorLight(int timeout1, int timeout2)
{
    digitalWrite(ledRouge, HIGH);
    delay(timeout1);
    
    digitalWrite(ledRouge, LOW);
    digitalWrite(ledVerte, HIGH);
    delay(timeout1);
    
    digitalWrite(ledJaune, HIGH);
    digitalWrite(ledVerte, LOW);
    delay(timeout2);
    
    digitalWrite(ledVerte, LOW);
    digitalWrite(ledJaune, LOW);
}
void loop()
{
   tricolorLight(5000, 1000);
}
