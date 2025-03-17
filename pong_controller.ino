#include "requirements.h"

#define BUTTON_PIN 14

Bounce2::Button pause_button;

player p1(PLAYER1_CLK, PLAYER1_DT, KEY_UP_ARROW, KEY_DOWN_ARROW);

void setup() {
    // put your setup code here, to run once:

    pause_button.attach(BUTTON_PIN, INPUT_PULLUP);

    pause_button.interval(5);

    pause_button.setPressedState(LOW);

    Keyboard.begin();
}

void loop() {
    // put your main code here, to run repeatedly:

    pause_button.update();

    p1.update();

    /*player1_rotor.tick();

    if(pause_button.pressed())
    {
        Keyboard.press('P');

        delay(100);

        Keyboard.releaseAll();
    }

    if(player1_rotor.getPosition() > 0)
    {
        player1_rotor.setPosition(0);
        
        tp = millis();

        Keyboard.release(KEY_DOWN_ARROW);

        Keyboard.press(KEY_UP_ARROW);
    }

    if(player1_rotor.getPosition() < 0)
    {
        player1_rotor.setPosition(0);

        tp = millis();

        Keyboard.release(KEY_UP_ARROW);

        Keyboard.press(KEY_DOWN_ARROW);
    }

    if(millis() - tp > 100)
    {
        Keyboard.releaseAll();
    }*/
}
