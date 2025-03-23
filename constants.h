/*
    this header should act as a settings page, if you need to change pins
    or keycodes or the delay, you can do that directly from here, no need
    to change other files
*/

/*
    these constants represents the pins of arduino pro micro
    and some rlevent keys,
*/

#define PLAYER1_DT 16
#define PLAYER1_CLK 10

#define PLAYER1_UP KEY_UP_ARROW
#define PLAYER1_DOWN KEY_DOWN_ARROW

#define PLAYER2_DT 14
#define PLAYER2_CLK 15

#define PLAYER2_UP 's'
#define PLAYER2_DOWN 'x'

#define RESTART_PIN 9
#define PAUSE_PIN 8
#define ESC_PIN 7

/*
    the keys needed to be pressed down for several milliseconds to
    simulate key press
*/

#define BUTTON_PRESS_DURATION 200 //ms