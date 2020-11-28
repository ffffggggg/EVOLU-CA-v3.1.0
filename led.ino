
const int RelaisSignal = 4;
const int Deblock = 13;
const int Relais1 = 12;
const int Relais2 = 16;

void setup() {
  // put your setup code here, to run once:
  pinMode(RelaisSignal,OUTPUT);
  pinMode(Deblock,OUTPUT);
  pinMode(Relais1,OUTPUT);
  pinMode(Relais2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RelaisSignal,HIGH);
  digitalWrite(Relais1,HIGH);
  delay(1000);
  digitalWrite(RelaisSignal,LOW);
  digitalWrite(Relais1,LOW);
  delay(1000);
  digitalWrite(Deblock,HIGH);
  digitalWrite(Relais2,HIGH);
  delay(1000);
  digitalWrite(Deblock,LOW);
  digitalWrite(Relais2,LOW);
  delay(1000);

  
}
