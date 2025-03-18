class key_button
{
    uint8_t key;
    
    int pin;

    Bounce2::Button pause_button;

    public:

    key_button(uint8_t _key, int _pin) : key(_key), pin(_pin)
    {}

    void setup()
    {
        pause_button.attach(pin, INPUT_PULLUP);

        pause_button.interval(5);

        pause_button.setPressedState(LOW);
    }

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