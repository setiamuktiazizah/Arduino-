void setup() {
  // put your setup code here, to run once:
  #define roda1 3
  #define roda2 4
  #define roda3 5
  #define roda4 6

  pinMode (roda1, OUTPUT);
  pinMode (roda2, OUTPUT);
  pinMode (roda3, OUTPUT);
  pinMode (roda4, OUTPUT);

  digitalWrite (roda1, HIGH);
  digitalWrite (roda2, HIGH);
  digitalWrite (roda3, HIGH);
  digitalWrite (roda4, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (roda1, HIGH);
  digitalWrite (roda2, LOW);
  digitalWrite (roda3, HIGH);
  digitalWrite (roda4, LOW);

  digitalWrite (roda1, LOW);
  digitalWrite (roda2, HIGH);
  digitalWrite (roda3, LOW);
  digitalWrite (roda4, HIGH);
}
