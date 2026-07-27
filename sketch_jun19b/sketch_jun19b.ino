#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Endereço I2C comum (tente 0x3F se 0x27 não funcionar)
LiquidCrystal_I2C lcd(0x27, 16, 2);

const char* refrao[] = {
  "You know, you",
  "know where you",

  "are with",
  "You know where",

  "you are with",
  "Floor collapses",

  "floating",
  "Bouncing back",

  "and one day, I",
  "am gonna grow",

  "wings", 
  "A chemical",

  "reaction (you",
  "know where you",

  "are)", 
  "Hysterical and",

  "useless (you",
  "know where you",

  "are)",
  "Hysterical and",

  "(you know where",
  "you are)"
};

int total = sizeof(refrao) / sizeof(refrao[0]);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  for (int i = 0; i < total; i += 2) {
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print(refrao[i]);

    if (i + 1 < total) {
      lcd.setCursor(0, 1);
      lcd.print(refrao[i + 1]);
    }

    delay(4000); // 4 segundos por trecho
  }
}
