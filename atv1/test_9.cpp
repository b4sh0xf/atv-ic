// C++ code
//

char senha[10]    = "bcraff777";
char guess[3][10] = {"bcraff778", "bcraff779", "bcraff777"};

void setup() {

    Serial.begin(9600);

    while (true) { 
      for (int i = 0; i < 3; i++) {
        if (strcmp(senha, guess[i]) == 0) {
          Serial.println("Cofre aberto!");
        } else {
          Serial.println("Senha incorreta!");
        }
      }
      break;
    }

}

void loop() {
  return;
}