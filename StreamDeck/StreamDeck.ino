#include <Keyboard.h>

#define BUTTON_1 2
#define BUTTON_2 3
#define BUTTON_3 4
#define BUTTON_4 5
#define BUTTON_5 6
#define BUTTON_6 7

void setup()
{

  Keyboard.begin();

  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
  pinMode(BUTTON_4, INPUT_PULLUP);
  pinMode(BUTTON_5, INPUT_PULLUP);
  pinMode(BUTTON_6, INPUT_PULLUP);

  delay(5000);  

}

void loop()
{

  if(digitalRead(BUTTON_1) == LOW)
  {

    Keyboard.write(KEY_F13);
    delay(500);

  }

  if(digitalRead(BUTTON_2) == LOW)
  {

    Keyboard.write(KEY_F14);
    delay(500);

  }

  if(digitalRead(BUTTON_3) == LOW)
  {

    Keyboard.write(KEY_F15);
    delay(500);

  }

  if(digitalRead(BUTTON_4) == LOW)
  {

    Keyboard.write(KEY_F16);
    delay(500);

  }

  if(digitalRead(BUTTON_5) == LOW)
  {

    Keyboard.write(KEY_F17);
    delay(500);

  }

  if(digitalRead(BUTTON_6) == LOW)
  {

    Keyboard.write(KEY_F18);
    delay(500);

  }


}
