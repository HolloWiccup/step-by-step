#define ANODE 1

#if (ANODE)
  #define LED_ON 0
  #define LED_OFF 1
#else
  #define LED_ON 1
  #define LED_OFF 0
#endif


#define BTN_LED_RGB 3
#define LED_RGB 2

bool flag = false;
int timerWork = 1000, bounce = 200;
unsigned long ms;

void setup() {
  Serial.begin(9600);

  pinMode(LED_RGB, OUTPUT);
  digitalWrite(LED_RGB, LED_OFF);

  pinMode(BTN_LED_RGB, INPUT_PULLUP);
}

void loop() {
  bool ledStatus = !digitalRead(BTN_LED_RGB);
  
  if(ledStatus && !flag){
    flag = true;
    ms = millis();
    digitalWrite(LED_RGB, LED_ON);
    Serial.print("click");
  }

  if((millis() - ms > timerWork) && flag){
    flag = false;
    digitalWrite(LED_RGB, LED_OFF);
    Serial.println("off");
  }

  delay(100);
}