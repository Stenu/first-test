/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
*/

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 13;
int led2 = 12;
int led3 = 11;

int ledit[3] = {led1, led2, led3};

int luvut[8][3] =
{
  {1, 1, 1},
  {1, 1, 0},
  {1, 0, 1},
  {1, 0, 0},
  {0, 1, 1},
  {0, 1, 0},
  {0, 0, 1},
  {0, 0, 0}
};

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}
// the loop routine runs over and over again forever:
void loop() {

  for (int i = 0; i < 8; i++) {

    for (int j = 0; j < 3; j++) {

      if (luvut[i][j] == 1) {
        digitalWrite(ledit[j], HIGH);
      } else {
        digitalWrite(ledit[j], LOW);
      }

    }
    delay(1000);
  }

  
}
