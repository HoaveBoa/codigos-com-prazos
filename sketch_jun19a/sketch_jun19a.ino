#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <LiquidCrystal_I2C.h>

// --- OLED ---
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// --- LCD ---
LiquidCrystal_I2C lcd(0x27, 16, 2); // troque 0x27 se o scanner mostrar outro

// --- LEDs ---
int leds[] = {2, 3, 4, 5, 6};

// --- Mensagens ---
String mensagens[] = {
  "Te amo muito",         
  "I love you so much",   
  "Ik hou heel veel van je", 
  "Ich liebe dich sehr",  
  "Ti amo tanto"          
};

int posY = 64;   
int msgIndex = 0; 
unsigned long ultimoTempoTroca = 0;
const unsigned long intervaloTroca = 1000; // troca a cada 1 segundo

void setup() {
  // LEDs
  for (int i = 0; i < 5; i++) pinMode(leds[i], OUTPUT);

  // Inicia I2C
  Wire.begin();

  // OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    for (;;);
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  // LCD
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Feliz 47 anos");
  lcd.setCursor(0, 1);
  lcd.print("Mae te amo <3");
}

void loop() {
  // --- LEDs piscando em sequência ---
  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], HIGH);
    delay(50); // piscando mais rápido
    digitalWrite(leds[i], LOW);
  }

  // --- Texto rolando na OLED ---
  display.clearDisplay();
  display.setCursor(0, posY);
  display.println(mensagens[msgIndex]);
  display.display();

  posY -= 2; // rolagem mais rápida
  if (posY < -10) {
    posY = 64;
    msgIndex++; // troca de mensagem assim que sair da tela
    if (msgIndex >= 5) msgIndex = 0;
  }

  delay(30); // diminui delay para rolagem mais suave e rápida
}
