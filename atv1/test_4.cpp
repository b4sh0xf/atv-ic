// C++ code
//

void setup() {

  Serial.begin(9600);

  float nota = 7.7;

  if (nota >= 7) {
    Serial.println("Aprovado");
  } else {
    Serial.println("Reprovado");
  }

}

void loop() {
  return;
}