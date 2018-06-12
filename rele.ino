int sinalparaorele = 4; 

void setup()
{
  //Define o pino como saida
  pinMode(sinalparaorele, OUTPUT); 
}

void loop()
{
  //Aciona o rele
  digitalWrite(sinalparaorele, HIGH); 
  delay(5000); //Aguarda 1 segundos
  //Desliga o rele
  digitalWrite(sinalparaorele, LOW); 
  delay(5000); //Aguarda 1 segundos e reinicia o processo
}

