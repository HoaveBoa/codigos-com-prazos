void setup() {
  pinMode(13, OUTPUT); // Define o pino 13 como saída
  pinMode(12, OUTPUT); // Define o pino 12 como saída
  pinMode(11, OUTPUT); // Define o pino 11 como saída
}

void loop() {
  digitalWrite(13, HIGH); // Liga o LED no pino 13 
  digitalWrite(12, HIGH); // Liga o LED no pino 12
  digitalWrite(11, HIGH); // Liga o LED no pino 11 // Espera 100 milissegundos
  delay(10);

  digitalWrite(13, LOW); // Desliga o LED no pino 13
  digitalWrite(12, LOW); // Desliga o LED no pino 12
  digitalWrite(11, LOW); // Desliga o LED no pino 11
  delay(10); // Espera 100 milissegundos
}
