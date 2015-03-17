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
    
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
}

void loop()
{

      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      
      delay(1000);
      
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      
      delay(1000);
 
}
