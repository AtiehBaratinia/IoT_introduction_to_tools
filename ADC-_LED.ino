const int ldrPin = A0;
const int buzzer = D1;
float scaled = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ldrPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buzzer, OUTPUT); 
}

void loop() {
  float ldrStatus = analogRead(ldrPin);
  scaled = (100*ldrStatus/1024);
  Serial.println(scaled);
   
  if(scaled >= 50){
      digitalWrite(LED_BUILTIN, LOW);
      tone(buzzer, 500);
    
  }else{
      digitalWrite(LED_BUILTIN, HIGH);
      noTone(buzzer); 
  }
  delay(500);
}
