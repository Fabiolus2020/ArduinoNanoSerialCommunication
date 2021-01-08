//created by Fabiolus 2021/01/08
//the_fabiolous@hotmail.com

int BlinkTime;
int RedLedPin = 3;



void setup() {
  Serial.begin(9600);
  pinMode(RedLedPin, OUTPUT);
  digitalWrite(RedLedPin, LOW);

}


void loop() {
  Serial.println("How many time do you want the LED to blink?");

  while (Serial.available() == 0); {}

  BlinkTime = Serial.parseInt();

  Serial.print("You have chosen number: ");
  Serial.println(BlinkTime);
  delay(1000);

  for (int counter = 1; counter <= BlinkTime; counter++) {
    digitalWrite(RedLedPin, HIGH);
    delay(1000);
    digitalWrite(RedLedPin, LOW);
    delay(1000);
  }

}
