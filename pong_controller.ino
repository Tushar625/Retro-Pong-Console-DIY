#include <RotaryEncoder.h>
#include <Keyboard.h>
#include <Bounce2.h>

#define BUTTON_PIN 14
#define PLAYER1_PIN1 10
#define PLAYER1_PIN2 16

// #define PLAYER2_PIN1 2
// #define PLAYER2_PIN2 3

RotaryEncoder player1_rotor(PLAYER1_PIN1, PLAYER1_PIN2, RotaryEncoder::LatchMode::TWO03);

Bounce2::Button pause_button;

unsigned long tp;

void setup() {
    // put your setup code here, to run once:

    pause_button.attach(BUTTON_PIN, INPUT_PULLUP);

    pause_button.interval(5);

    pause_button.setPressedState(LOW);

    Keyboard.begin();

    tp = millis();
}

void loop() {
    // put your main code here, to run repeatedly:

    pause_button.update();

    player1_rotor.tick();

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
    }
}
