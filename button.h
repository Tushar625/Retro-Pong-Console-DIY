/*
    this class provides a simple interface to associate a pin to a keyboard key.
    
    the pins are kept in "INPUT_PULLUP".

    the push buttons are used to ground them.

    Thus, we simulate a key press with a push button
*/

class key_button
{
    uint8_t key;
    
    int pin;

    Bounce2::Button pause_button;

    public:

    // the constructor takes the key_code and the no. of the pin the button is attached to

    key_button(uint8_t _key, int _pin) : key(_key), pin(_pin)
    {}

    // we must call this from setup() to setup the button

    void setup()
    {
        pause_button.attach(pin, INPUT_PULLUP);

        pause_button.interval(5);

        pause_button.setPressedState(LOW);
    }

    // call this from loop(), it detects the button press and presses the key

    void update()
    {
        pause_button.update();

        if(pause_button.pressed())
        {
            Keyboard.press(key);

            delay(BUTTON_PRESS_DURATION);

            Keyboard.releaseAll();
        }
    }
};