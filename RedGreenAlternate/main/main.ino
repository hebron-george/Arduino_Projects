/*
 * Author: Hebron George
 * Date: May 29, 2017 12:56 PM EST
 * 
 * Red Green Alternate
 * 
 * This is a simple program to turn a red and green LED on and off repeadetly 
 * at a certain cadence:
 *  - Turn Red on for 1s
 *  - Turn Green on for 1s
 *  - Turn Red & Green on for 1s
 *  - Turn Green on for 1s
 *  - Turn Red on for 1s
 *  - Turn Red & Green on for 1s
 *  - Repeat
 * 
 */

int redPin = 2;
int greenPin = 4;

void setup() {
  // put your setup code here, to run once:

  // set red LED pin as output
  pinMode(redPin, OUTPUT);
  
  // set green LED pin as output
  pinMode(greenPin, OUTPUT);

}

void loop() {
  digitalWrite(redPin, HIGH);
  delay(500);

  digitalWrite(redPin, LOW);
  delay(500);

  digitalWrite(greenPin, HIGH);
  delay(500);

  digitalWrite(greenPin, LOW);
  delay(500);

  flipBothColors(HIGH);
  delay(500);

  flipBothColors(LOW);
  delay(500);

  

}

void flipBothColors(uint8_t flip) {
  digitalWrite(greenPin, flip);
  digitalWrite(redPin, flip);
}


