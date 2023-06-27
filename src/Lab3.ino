SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
void setup() {
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, HIGH);
  digitalWrite(D7, HIGH);
}
int red = 255;
int green = 255;
int blue = 255;
void loop() {
  for(red=255;red>0;red--) {
    analogWrite(D7, red);
    delay(10);
  }
  for(red=0;red<256;red++) {
    analogWrite(D7, red);
    delay(10);
  }
  for(green=255;green>0;green--) {
    analogWrite(D6, green);
    delay(10);
  }
  for(green=0;green<256;green++) {
    analogWrite(D6, green);
    delay(10);
  }
  for(blue=255;blue>0;blue--) {
    analogWrite(D5, blue);
    delay(10);
  }
  for(blue=0;blue<256;blue++) {
    analogWrite(D5, blue);
    delay(10);
  }
}