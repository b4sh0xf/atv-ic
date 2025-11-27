// C++ code
//

float temp = 25.5;

void setup() {

  Serial.begin(9600);

  if (temp > 30) {
    Serial.println("Quente");
  } else if (temp < 20) {
    Serial.println("Frio");
  } else if (temp > 20 && temp < 30) {
    Serial.println("Agradavel");
  }

}

void loop() {
  return;
}