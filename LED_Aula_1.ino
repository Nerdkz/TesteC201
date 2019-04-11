
#define LED 3
#define segundo 100

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  Serial.begin(19200);
}

void loop() {
  digitalWrite(LED, HIGH);
  Serial.println("Hello, world!");
  delay(segundo);
  digitalWrite(LED, LOW);
  delay(segundo);
}  


