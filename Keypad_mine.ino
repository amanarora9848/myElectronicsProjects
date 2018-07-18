//Created by Aman Arora

#include <Keypad.h>

const byte numRows = 4; //number of rows on the keypad
const byte numCols = 4; //number of columns on the keypad
#define led 13

//keymap defines the key pressed according to the row and columns just as appears on the keypad
char keymap[numRows][numCols] =
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

//Code that shows the the keypad connections to the arduino terminals
byte rowPins[numRows] = {9, 8, 7, 6}; //Rows 0 to 3
byte colPins[numCols] = {5, 4, 3, 2}; //Columns 0 to 3
int a = 0;
//initializes an instance of the Keypad class
Keypad myKeypad = Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT) ;
}

//If key is pressed, this key is stored in 'keypressed' variable
//If key is not equal to 'NO_KEY', then this key is printed out
//if count=17, then count is reset back to 0 (this means no key is pressed during the whole keypad scan process
void loop() {
  char keypressed = myKeypad.getKey();
  if (keypressed != NO_KEY)
  {
    Serial.println(keypressed);
    if (keypressed == '1') {
      a = 1;
    }
    if (keypressed == '2') {
      a = 2;
    }
    if (keypressed == '3') {
      a = 3;
    }
    if (keypressed == '4') {
      a = 4;
    }
    if (keypressed == '5') {
      a = 5;
    }
    if (keypressed == '6') {
      a = 6;
    }
    if (keypressed == '7') {
      a = 7;
    }
    if (keypressed == '8') {
      a = 8;
    }
    if (keypressed == '9') {
      a = 9;
    }
    if (keypressed == 'A') {
      a = 10;
    }
    if (keypressed == 'B') {
      a = 11;
    }
    if (keypressed == 'C') {
      a = 12;
    }
    if (keypressed == 'D') {
      a = 13;
    }
    if (keypressed == '*') {
      a = 14;
    }
    if (keypressed == '0') {
      a = 15;
    }

//a is an optional variable I have added to control my output to the attached LEDs.
    
  }
  if (a == 1) {
    digitalWrite(led, HIGH) ;
    delay(100);
    digitalWrite(led, LOW) ;
    delay(100) ;
  }
  if (a == 2) {
    digitalWrite(led, HIGH) ;
    delay(200);
    digitalWrite(led, LOW) ;
    delay(200) ;
  }
  if (a == 3) {
    digitalWrite(led, HIGH) ;
    delay(300);
    digitalWrite(led, LOW) ;
    delay(300) ;
  }
  if (a == 4) {
    digitalWrite(led, HIGH) ;
    delay(400);
    digitalWrite(led, LOW) ;
    delay(400) ;
  }
  if (a == 5) {
    digitalWrite(led, HIGH) ;
    delay(500);
    digitalWrite(led, LOW) ;
    delay(500) ;
  }
  if (a == 6) {
    digitalWrite(led, HIGH) ;
    delay(600);
    digitalWrite(led, LOW) ;
    delay(600) ;
  }
  if (a == 7) {
    digitalWrite(led, HIGH) ;
    delay(700);
    digitalWrite(led, LOW) ;
    delay(700) ;
  }
  if (a == 8) {
    digitalWrite(led, HIGH) ;
    delay(800);
    digitalWrite(led, LOW) ;
    delay(800) ;
  }
  if (a == 9) {
    digitalWrite(led, HIGH) ;
    delay(900);
    digitalWrite(led, LOW) ;
    delay(900) ;
  }
  if (a == 10) {
    digitalWrite(led, HIGH) ;
    delay(30);
    digitalWrite(led, LOW) ;
    delay(30) ;
  }
  if (a == 11) {
    digitalWrite(led, HIGH) ;
    delay(45);
    digitalWrite(led, LOW) ;
    delay(45) ;
  }
  if (a == 12) {
    digitalWrite(led, HIGH) ;
    delay(60);
    digitalWrite(led, LOW) ;
    delay(60) ;
  }
  if (a == 13) {
    digitalWrite(led, HIGH) ;
    delay(85);
    digitalWrite(led, LOW) ;
    delay(85) ;
  }
  if (a == 14) {
    digitalWrite(led, HIGH) ;
    }
    if (a == 15) {
    digitalWrite(led, LOW) ;
    }
}
