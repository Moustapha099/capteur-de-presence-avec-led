int PIR  2
int LED  12

unsigned long counttime;

void setup() {
   pinMode(PIR, INPUT);
   pinMode(LED, OUTPUT);
}

void loop() {
   if (digitalRead(PIR) == HIGH) {
      digitalWrite(LED, HIGH);
      counttime = millis();
   }

   if (digitalRead(PIR) == LOW && millis() - counttime > 60000) {
      digitalWrite(LED, LOW);
   }
