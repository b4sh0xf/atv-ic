void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Ola, Intercin!");
}

void loop(){}

/*

- tentamos fazer utilizando a função que foi recomendada 
readStringUntil(), entretanto, a utilização dela culminava
em um print que não correspondia ao desejado. portanto, decidimos
criar um array (já que uma string nada mais é do que um array
de char) e armazenar caractere por caractere do que é enviado
na serial.

*/
