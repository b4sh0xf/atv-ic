// C++ code
//

void setup() {

    Serial.begin(9600);

    for(int i = 0; i <= 10; i++) {
        if (i % 2 == 0) {
            Serial.println(i);
        }
    }

}

void loop() {
  return;
}