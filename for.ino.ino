void setup() {
  // put your setup code here, to run once:
  pinMode (5,OUTPUT);
  int endTime = 5000;
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=1; i<=25; i++){
    digitalWrite (5,HIGH);
    delay(1000);
    digitalWrite (5,LOW);
    delay(1000);
  }
  //lampu LED nyala mati selama 25 kali dengan delay selama 1 detik setelah hidup maupun setelah mati
  delay (endTime);
  //setelah pengulangan td, maka sistem diam selama 5 detik
}
