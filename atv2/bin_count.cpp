/*

- contador -> percorrer os valores de 0 a 15

- 1 arduino
- 1 botao
- 4 leds

- 4 leds -> 4 bits 
    - ex: 0 = 0000 -> todos os leds apagados
- passar pro proximo numero assim que o botao for pressionado
- quando chegar no 15, voltar pro 0 só quando o botao for pressionado de novo

*/

const int leds[] = {2, 3, 4, 5};
const int btn    = 8;

void setup() {

  pinMode(leds[0], OUTPUT);
  pinMode(leds[1], OUTPUT);
  pinMode(leds[2], OUTPUT);
  pinMode(leds[3], OUTPUT);
  pinMode(btn, INPUT_PULLUP);

}

void loop() {

    for (int i = 0; i < 16; i++) {

        if (i & 1) { // comparação bitwise (bit-a-bit) 1 = 0001
            digitalWrite(leds[3], HIGH);
        } else {
            digitalWrite(leds[3], LOW);
        }

        if (i & 2) { // 2 = 0010
            digitalWrite(leds[2], HIGH);
        } else {
            digitalWrite(leds[2], LOW);
        }

        if (i & 4) { // 4 = 0100
            digitalWrite(leds[1], HIGH);
        } else {
            digitalWrite(leds[1], LOW);
        }

        if (i & 8) { // 8 = 1000
            digitalWrite(leds[0], HIGH);
        } else {
            digitalWrite(leds[0], LOW);
        }
    
        while (digitalRead(btn) == LOW) {
            // esperar o botao ser pressionado
        }
    
        while (digitalRead(btn) == HIGH) {
            // esperar o botao ser solto
        }

        delay(50);
    }

}
