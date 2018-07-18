#define rfTransmitPin 4
#define led 13
void setup() {
  pinMode(rfTransmitPin, OUTPUT);  //Define transmit pin of Arduino to transmit data to rf module.
  pinMode(led, OUTPUT); // 13th pin is led.
}
void loop() {
  for (int i = 4000; i > 5; i = i - (i / 3)) {
    digitalWrite(rfTransmitPin, HIGH); //Data being transmitted.
    digitalWrite(led, HIGH); //High led as data gets transmitted.
    delay(2000); //Wait for 2 seconds.

    digitalWrite(rfTransmitPin, LOW);
    digitalWrite(led, LOW);
    delay(i); //Delay gets changed as there is change in the transfer pattern of data, maybe due to distance or obstacles.
  }
}


