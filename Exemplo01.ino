//Código do exemplo 01
//Código para ler o botão e enquanto clicar ligar o led

const int LED = 21;
const int botao = 23;
int estado = 0;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(botao, INPUT);
}

void loop(){
  estado=digitalRead(botao);

  if(estado==1){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}
