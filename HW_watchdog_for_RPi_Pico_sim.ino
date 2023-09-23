/*
 * HW watchdog for RPI Pico (W)
 * original design by Nicu FLORICA (niq_ro)
 */
#define initial 7
#define piviem 5
#define ledintern 13
#define eroare 100

void setup() {
  digitalWrite(initial, HIGH);
  pinMode(initial, OUTPUT);
  pinMode(ledintern, OUTPUT);
  digitalWrite(initial, HIGH);
  pinMode(piviem, OUTPUT);
  digitalWrite(ledintern, HIGH);
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
  delay(3000);
  Serial.println("Simulate stack -> Set PWM pin at 0%");
  Serial.println("Output pin need to set LOW -> LED off");
  delay(200);
  analogWrite(piviem, 0);
  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
