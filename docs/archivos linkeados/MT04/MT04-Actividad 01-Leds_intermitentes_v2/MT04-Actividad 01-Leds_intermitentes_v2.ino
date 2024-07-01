int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);  // enciende LED1
  delay(200);                 // espera por 200ms
  digitalWrite(LED2, HIGH);  // enciende LED2
  delay(200);                 // espera por 200ms
  digitalWrite(LED3, HIGH);  // enciende LED3
  delay(200);                 // espera por 200ms
  digitalWrite(LED1, LOW);   // apaga LED1
  delay(100);                 // espera por 100ms
  digitalWrite(LED2, LOW);   // apaga LED2
  delay(100);                 // espera por 100ms
  digitalWrite(LED3, LOW);   // apaga LED3
  delay(100);                 // espera por 100ms antes de repetir todo de nuevo
}
