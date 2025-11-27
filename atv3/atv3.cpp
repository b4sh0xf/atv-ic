/* 
 * 9 leds organizados em uma matriz 3x3 
 * uso do potenciometro -> a cada giro, é selecionado um led 
 * ao selecionar o led, ele deverá acender com o clique do botao 
 * caso 3 leds em uma mesma linha, coluna ou diagonal estejam acesos, 
 * todos os leds ligados devem desligar 
 * 
 * 0 1 2
 * 3 4 5
 * 6 7 8 
 */

const int btn     = 1;
const int pot     = A0;
const int leds[]  = {2, 3, 4, 5, 6, 7, 8, 9, 10};
int potVal        = 0;
bool ledStates[9] = {false}; // array com 9 elementos iguais   

void setup() {

  pinMode(btn, INPUT_PULLUP);
  pinMode(pot, INPUT);
  for (int i = 0; i < 9; i++) {
    pinMode(leds[i], OUTPUT);
  }

}

void loop() {

  potVal = analogRead(pot);
  potVal = map(potVal, 0, 1023, 0, 8); // remapeia a leitura do potenciometro para o intervalo de 0 a 8

  if(digitalRead(btn) == LOW) {
    ledStates[potVal] = !ledStates[potVal];
    delay(300); // debounce
  }

  for (int i = 0; i < 9; i++) {
    if (ledStates[i] == true) {
      digitalWrite(leds[i], HIGH);
    } else {
      digitalWrite(leds[i], LOW);
    }
  }

  // verificando colunas
  if (ledStates[0] == true && ledStates[3] == true && ledStates[6] == true ||
      ledStates[1] == true && ledStates[4] == true && ledStates[7] == true ||
      ledStates[2] == true && ledStates[5] == true && ledStates[8] == true) {
    shutdown();
  }

  // verificando linhas
  if (ledStates[0] == true && ledStates[1] == true && ledStates[2] == true ||
      ledStates[3] == true && ledStates[4] == true && ledStates[5] == true ||
      ledStates[6] == true && ledStates[7] == true && ledStates[8] == true) {
    shutdown();
  }

  // verificando diagonais
  if (ledStates[0] == true && ledStates[4] == true && ledStates[8] == true) {
    shutdown();
  }

  if (ledStates[2] == true && ledStates[4] == true && ledStates[6] == true) {
    shutdown();
  }

}

void shutdown() {

  for (int i = 0; i < 9; i++) {
    digitalWrite(leds[i], LOW);
    ledStates[i] = false;
  }

}
