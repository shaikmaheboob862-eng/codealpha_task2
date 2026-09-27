const int LDR_PIN = A0;
const int LED_PIN = 9;

const int THRESHOLD = 500;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(LDR_PIN);

  Serial.print("LDR Value: ");
  Serial.println(lightValue);

  if (lightValue < THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);
  } 
  else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(500);
}
