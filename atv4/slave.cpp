#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20, 16, 2);

char msg[17];
int index = 0;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.clear();
  lcd.backlight();
}

void loop() {
  if (Serial.available()) {
    
    char letra = Serial.read();
    
    if (letra == '\n' || index >= 16) {
      msg[index] = '\0';
      lcd.clear();
      lcd.setCursor(1,0);
      lcd.print(msg);
      index = 0;
    }
    else if (letra != '\r') {
      msg[index] = letra;
      index++;
    }
  }
}
