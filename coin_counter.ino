//Circuit

//      TCRT5000
// 5v           --->   VCC
// Grnd         --->   Grnd
// A0           --->   A0
// D8           --->   D0


const int pinIRd = 8;
const int pinIRa = A0;
const int pinLED = 13;
int IRvalueA = 0;
int IRvalueD = 0;

int money = 0;

int IR20 = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(pinIRd,INPUT);
  pinMode(pinIRa,INPUT);
  pinMode(pinLED,OUTPUT);

}

void coinDetected() {
    money ++;
    digitalWrite(pinLED, LOW);
}
void loop()
{
  IR20 = digitalRead(pinIRd);
  
  if (IR20 == 0){
    coinDetected();
  }
  Serial.print(money);


  delay(200);
}
