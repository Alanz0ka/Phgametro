
 // Código para calibração
// Converte valor analógico em tensão
 
int entrada_A0;
float tensao, soma = 0.0;
int i = 0;
void setup()  {
  Serial.begin(9600);
}
 
void loop() {
  entrada_A0 = analogRead(A0);
  tensao = (entrada_A0 * 5.0) / 1024.0;
  soma += tensao;
  if (i == 50){
    Serial.println(soma /50);
    soma = 0;
    i = 0;
  }
  i++;
    
  delay(10);
}