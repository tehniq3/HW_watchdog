/*
 * HW watchdog for RPI Pico (W)
 * original design by Nicu FLORICA (niq_ro)
 */
#define initial 21
#define piviem 20
#define ledintern 32
#define eroare 100

void setup() {
  digitalWrite(initial, HIGH);
  pinMode(initial, OUTPUT);
//  pinMode(ledintern, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(initial, HIGH);
  pinMode(piviem, OUTPUT);
  analogWriteFreq(1000);
//  digitalWrite(ledintern, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.begin(9600);
  Serial.println("-");
  Serial.println("HW watchdog by niq_ro");
  digitalWrite(initial, HIGH);
  pinMode(initial, OUTPUT);
  digitalWrite(initial, HIGH);
  pinMode(piviem, OUTPUT);
  Serial.println("Set INIT pin as HIGH");
  delay(3000);
  Serial.println("Set PWM pin at 50%");
  analogWrite(piviem, 128);
  delay(3000);
  Serial.println("Set INIT pin as LOW");
  digitalWrite(initial, LOW);
  delay(5000);
  Serial.println("Simulate stack -> Set PWM pin at 0%");
  Serial.println("Output pin need to set LOW -> LED off");
  delay(200);
  analogWrite(piviem, 0);
  delay(3000);
}

void loop()   {
 digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
