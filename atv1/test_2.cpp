// C++ code
//

void setup() {

  Serial.begin(9600);

  int   idade      = 18;
  float altura     = 1.64;
  char  inicial[3] = "oi"; // null byte
  
  Serial.println(idade);
  Serial.println(altura);
  Serial.println(inicial);

}

void loop() {
  return;
}