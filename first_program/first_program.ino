#define LED_PIN 8
#define ONE_SEC 1000

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);      
  delay(ONE_SEC);                 
  digitalWrite(LED_PIN, LOW);       
  delay(ONE_SEC);  
}
