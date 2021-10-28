int waterDetector = A0;
int level = 0;
int buzzer = D6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(waterDetector, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  level=analogRead(waterDetector);
  level = 100*level/1024;
  Serial.println(level);
  
  analogWrite(buzzer, level);
}
