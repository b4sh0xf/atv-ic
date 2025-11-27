// C++ code
//

void setup() {

    Serial.begin(9600);

    int count = 1;
    int soma  = 0;

    while (soma <= 100) {
        soma += count;
        count++;
    }

    Serial.println(soma);
    Serial.println(count);

}

void loop() {
  return;
}