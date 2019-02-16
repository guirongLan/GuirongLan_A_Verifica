//port di led
int rosso = 11;
int giallo = 10;
int bianco = 9;
int verde = 8;
int volte;
int tempo;//tempo in Random
void setup() {
  // put your setup code here, to run once:
  //dire ci sono i LED
  pinMode(rosso,OUTPUT);
  pinMode(giallo,OUTPUT);
  pinMode(bianco,OUTPUT);
  pinMode(verde,OUTPUT);
Serial.begin(9600);//dico che c'e serial
  randomSeed(analogRead(0));//dichiaro random
  tempo = random(300,800);//numero di random da 300 a 800
Serial.println("questo è il tempo Random:");
Serial.println(tempo);
}
void AccensioneLed(){
  for(int i=0;i<volte;i++)  {
  digitalWrite(rosso,HIGH);
  delay(tempo);
  digitalWrite(rosso,LOW);
  digitalWrite(giallo,HIGH);
  delay(2*tempo);
  digitalWrite(giallo,LOW);
  digitalWrite(bianco,HIGH);
  delay(tempo);
  digitalWrite(bianco,LOW);
  digitalWrite(verde,HIGH);
  delay(3*tempo);
  digitalWrite(verde,LOW);
                            }
  }
void loop() {
  // put your main code here, to run repeatedly:
  //ripetere
Serial.println("quante volte vuoi ripedere il ciclo?");
Serial.println("dammi un numero");
  while(Serial.available() == 0){
}
  volte = Serial.readString().toInt();
  Serial.println(volte);
  //mio programma
  AccensioneLed();
}
