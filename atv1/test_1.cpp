// C++ code
//

int i;

void setup() {

  Serial.begin(9600);
  Serial.println("Hello, World!");
  
}

void loop() {
  
  if (i < 5) {
    i++;
    Serial.println(i);
  }
  
}
