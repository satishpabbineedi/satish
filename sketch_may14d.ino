int LEDpin1 = D0;
int LEDpin2 = D1;
int LEDpin3 = D2;
void setup() {
  Serial.begin(9600);
  pinMode(LEDpin1,OUTPUT);
  pinMode(LEDpin2,OUTPUT);
  pinMode(LEDpin3,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  
  // put your main code here, to run repeatedly:
  int dutycycle = analogRead(A0);
  if(dutycycle > 1023) dutycycle = 1023;
  Serial.print("Duty cycle: ");
  Serial.println(dutycycle);
  if(dutycycle>800 && dutycycle <=1023)
  digitalWrite(LEDpin1, HIGH);
  else
  digitalWrite(LEDpin1, LOW);
  if(dutycycle>400 && dutycycle <=800)
  digitalWrite(LEDpin2, HIGH);
  else
  digitalWrite(LEDpin2, LOW);
  if(dutycycle>0 && dutycycle <=400)
  digitalWrite(LEDpin3, HIGH);
  else
  digitalWrite(LEDpin3, LOW);
  delay(100);
  }
