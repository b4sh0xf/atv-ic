// C++ code
//

int seq[5]  = {1, 2, 3, 4, 5};
int soma    = 0;
float media = 0;
int size    = sizeof(seq) / sizeof(seq[0]);

void setup() {

    Serial.begin(9600);

    for (int i = 0; i < 5; i++) {
        soma += seq[i];
        media = soma / size;
        
    }

    Serial.println(soma);
    Serial.println(media);

}

void loop() {
  return;
}