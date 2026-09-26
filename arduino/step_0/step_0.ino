#define BTN_BUILTIN 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BTN_BUILTIN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println("hello");
  // delay(1000);
  digitalWrite(LED_BUILTIN, !digitalRead(BTN_BUILTIN));
  delay(100);
}
