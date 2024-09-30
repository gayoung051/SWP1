void setup() {
  pinMode(7,OUTPUT);

}

void loop() {
  int i=0;
  delay(1000);
  while(i<=5){
    digitalWrite(7, 0);
    delay(100);
    digitalWrite(7, 1);
    delay(100);
    i++;
    }
  while(1){
    //infinite loop
    }

}
