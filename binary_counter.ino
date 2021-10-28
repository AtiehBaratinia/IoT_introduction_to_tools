 uint8_t LED0pin = D0;
uint8_t LED1pin = D1;
uint8_t LED2pin = D2;
int counter = 0;
void setup() {
 pinMode(LED0pin, OUTPUT);
pinMode(LED1pin, OUTPUT);
pinMode(LED2pin, OUTPUT);
}

void loop() {
  if(counter == 0){
    digitalWrite(LED0pin, LOW);
    digitalWrite(LED1pin, LOW);
    digitalWrite(LED2pin, LOW);
  }else if(counter == 1){
    digitalWrite(LED0pin, LOW);
    digitalWrite(LED1pin, LOW);
    digitalWrite(LED2pin, HIGH);
  }else if(counter == 2){
    digitalWrite(LED0pin, LOW);
    digitalWrite(LED1pin, HIGH);
    digitalWrite(LED2pin, LOW);
  }else if(counter == 3){
    digitalWrite(LED0pin, LOW);
    digitalWrite(LED1pin, HIGH);
    digitalWrite(LED2pin, HIGH);
  }else if(counter == 4){
    digitalWrite(LED0pin, HIGH);
    digitalWrite(LED1pin, LOW);
    digitalWrite(LED2pin, LOW);
  }else if(counter == 5){
    digitalWrite(LED0pin, HIGH);
    digitalWrite(LED1pin, LOW);
    digitalWrite(LED2pin, HIGH);
  }else if(counter == 6){
    digitalWrite(LED0pin, HIGH);
    digitalWrite(LED1pin, HIGH);
    digitalWrite(LED2pin, LOW);
  }else if(counter == 7){
    digitalWrite(LED0pin, HIGH);
    digitalWrite(LED1pin, HIGH);
    digitalWrite(LED2pin, HIGH);
  }
  counter += 1;
  if(counter == 8){
    counter = 0;  
  }
  delay(1000);
}
