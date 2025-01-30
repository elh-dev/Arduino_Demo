//LED
const int red = 13;
const int white = 10;

//BUTTON
const int bred = 2;
const int bwhite = 3;

void setup() {
  //RED LED 
  pinMode(red, OUTPUT);

  //WHITE LED
  pinMode(white, OUTPUT);

  //BUTTON
  pinMode(bred, INPUT);
  pinMode(bwhite, INPUT);
}

void loop() {
  int buttonRed = digitalRead(bred);
  int buttonWhite = digitalRead(bwhite);

    if(buttonRed == HIGH){
    //LED ON 1sec
    digitalWrite(red, HIGH);
    delay(1000);
    }

    if(buttonWhite == HIGH){
    //LED ON 1sec
    digitalWrite(white, HIGH);
    delay(1000);

    //LED OFF 1sec
    digitalWrite(white, LOW);
    }

    else {
    //LED OFF
    digitalWrite(red, LOW);
    digitalWrite(white, LOW);
    }
}
