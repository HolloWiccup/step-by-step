#define BTN_RGB_LED 3
#define RGB_LED 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RGB_LED, OUTPUT);
  pinMode(BTN_RGB_LED, INPUT_PULLUP);
}

void loop() {
  digitalWrite(RGB_LED, digitalRead(BTN_RGB_LED));
  delay(100);
}
