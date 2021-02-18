const lamp1 = 3;
const lamp2 = 4;
const lamp3 = 5;
const lamp4 = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode (lamp1,OUTPUT);
  pinMode (lamp2,OUTPUT);
  pinMode (lamp3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (lamp4,HIGH);
  lampOn = myFunction(lamp1,lamp2,lamp3){ 
  if (lampOn < 13){ 
    digitalWrite (lampOn,HIGH);
    delay(1000);
  }
  else {
    digitalWrite (lamp4,LOW);
    delay (2000);
  }
  int myFunction (x,y,z){
    int result;
    result = x+y+z;
    return result;
  }
}
