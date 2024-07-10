#define DIR_PIN 3
#define STEP_PIN 2
#define ENABLE_PIN 4

void setup() {
  pinMode(DIR_PIN, OUTPUT);
  pinMode(STEP_PIN, OUTPUT);
  pinMode(ENABLE_PIN, OUTPUT);

 
  digitalWrite(ENABLE_PIN, LOW);
}

void loop() {
 
  digitalWrite(DIR_PIN, HIGH);
  for (int i = 0; i < 50; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(2000);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(2000);
  }
  delay(1000);

 
  digitalWrite(DIR_PIN, LOW);
  for (int i = 0; i < 50; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(2000);  
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(2000);
  }
  delay(1000);
}
