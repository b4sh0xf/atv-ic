// C++ code
//

void setup() {

  Serial.begin(9600);

  int a = 777;
  int b = 888;

  if (a > b) {
    Serial.println("a eh maior que b");
  }

  if (a == b) {
    Serial.println("a eh igual a b");
  }

  if (a != b && a < b) {
    Serial.println("a eh diferente de b");
  }

}

void loop() {
  return;
}