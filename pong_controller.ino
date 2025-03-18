#include "requirements.h"

player p1(PLAYER1_CLK, PLAYER1_DT, PLAYER1_UP, PLAYER1_DOWN);

player p2(PLAYER2_CLK, PLAYER2_DT, PLAYER2_UP, PLAYER2_DOWN);

key_button restart('R', RESTART_PIN);

key_button pause('P', PAUSE_PIN);

key_button escape(KEY_ESC, ESC_PIN);

void setup() {
    // put your setup code here, to run once:

    pause.setup();

    restart.setup();

    escape.setup();

    Keyboard.begin();
}

void loop() {
    // put your main code here, to run repeatedly:

    p1.update();

    p2.update();

    pause.update();

    restart.update();

    escape.update();
}
