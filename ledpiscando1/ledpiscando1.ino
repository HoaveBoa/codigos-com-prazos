bool piscarRapido = false; // Variável para controlar o modo de piscar rápido

void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial
  pinMode(13, OUTPUT); // Define o pino 13 como saída
  pinMode(12, OUTPUT); // Define o pino 12 como saída
  pinMode(11, OUTPUT); // Define o pino 11 como saída
  Serial.println("Comandos: A, B, C para ligar LEDs. X para desligar. R para piscar rápido.");
}

void loop() {
  if (Serial.available() > 0) {  // Verifica se há dados recebidos
    char comando = Serial.read(); // Lê o caractere enviado

    if (comando == 'A') { // Liga o LED no pino 13
      piscarRapido = false; // Sai do modo de piscar rápido
      digitalWrite(13, HIGH);
      Serial.println("LED 13 ligado!");
    } 
    else if (comando == 'B') { // Liga o LED no pino 12
      piscarRapido = false; // Sai do modo de piscar rápido
      digitalWrite(12, HIGH);
      Serial.println("LED 12 ligado!");
    } 
    else if (comando == 'C') { // Liga o LED no pino 11
      piscarRapido = false; // Sai do modo de piscar rápido
      digitalWrite(11, HIGH);
      Serial.println("LED 11 ligado!");
    } 
    else if (comando == 'X') { // Desliga todos os LEDs
      piscarRapido = false; // Sai do modo de piscar rápido
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      Serial.println("Todos os LEDs desligados!");
    } 
    else if (comando == 'R') { // Ativa ou desativa o modo de piscar rápido
      piscarRapido = !piscarRapido; // Alterna o estado de piscar rápido
      if (piscarRapido) {
        Serial.println("Modo piscar rápido ativado!");
      } else {
        Serial.println("Modo piscar rápido desativado!");
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
      }
    } 
    else {
      Serial.println("Comando invalido.");
    }
  }

  // Comportamento de piscar rápido
  if (piscarRapido) {
    digitalWrite(13, HIGH); // Liga os LEDs
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    delay(50);             // Espera 50ms
    digitalWrite(13, LOW); // Desliga os LEDs
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(50);             // Espera 50ms
  }
}

