
int brightness = 0;
int ldr = A0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ldr, INPUT);
}

void loop() {
  brightness = 1024-analogRead(ldr);
  Serial.println(brightness);
  analogWrite(LED_BUILTIN, brightness);
  
}
