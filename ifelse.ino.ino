const int pinDigital = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode (pinDigital,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (delayTime <10000){ 
  for (int i=1; i<=25; i++){
    digitalWrite (pinDigital,HIGH);
    delay(1000);
    digitalWrite (pinDigital,LOW);
    delay(1000);
  }
  //lampu LED nyala mati selama 25 kali dengan delay selama 1 detik setelah hidup maupun setelah mati
  }
  else {
    digitalWrite (pinDigital,HIGH);
    delay (5000);
  }
}
