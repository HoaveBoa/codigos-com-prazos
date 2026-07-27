#include <SoftwareSerial.h>
#include <Servo.h>

// --- Bluetooth via módulo HC-05 / HC-06 ---
// HC-05 TX  -> Arduino pino 2 (RX do SoftwareSerial)
// HC-05 RX  -> Arduino pino 3 (TX do SoftwareSerial) -- usar divisor de tensão!
SoftwareSerial BT(2, 3); // RX, TX

Servo escEsquerdo;
Servo escDireito;

// Pinos PWM disponíveis no Arduino Uno/Nano: 3,5,6,9,10,11
// Como o pino 3 já está em uso pelo SoftwareSerial, usamos 9 e 10 para os ESCs
const int PIN_ESC_E = 9;
const int PIN_ESC_D = 10;

int neutro = 1000;
int velocidade = 1700;

void parar() {
  escEsquerdo.writeMicroseconds(neutro);
  escDireito.writeMicroseconds(neutro);
}

void frente() {
  escEsquerdo.writeMicroseconds(velocidade);
  escDireito.writeMicroseconds(velocidade);
}

void esquerda() {
  escEsquerdo.writeMicroseconds(1300);
  escDireito.writeMicroseconds(velocidade);
}

void direita() {
  escEsquerdo.writeMicroseconds(velocidade);
  escDireito.writeMicroseconds(1300);
}

void setup() {
  Serial.begin(9600);
  BT.begin(9600); // baud padrão de fábrica do HC-05/HC-06

  escEsquerdo.attach(PIN_ESC_E, 1000, 2000);
  escDireito.attach(PIN_ESC_D, 1000, 2000);

  // Arma os ESCs
  escEsquerdo.writeMicroseconds(1000);
  escDireito.writeMicroseconds(1000);

  delay(5000);
  parar();

  Serial.println("Pronto para batalha.");
}

void loop() {
  if (BT.available()) {
    char comando = BT.read();

    switch (comando) {
      case 'F':
        frente();
        break;

      case 'L':
        esquerda();
        break;

      case 'R':
        direita();
        break;

      case 'S':
        parar();
        break;
    }
  }
}
