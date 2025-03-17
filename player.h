
// this file provides an object for easy handling of rotary encoder

class player
{
    RotaryEncoder rotor;

    uint8_t up_key, down_key;

    unsigned long tp;

    bool key_pressed;

    public:

    player(int clk, int dt, uint8_t up, uint8_t down)
    : rotor(clk, dt, RotaryEncoder::LatchMode::TWO03),
      up_key(up),
      down_key(down),
      key_pressed(false)
    {
        tp = millis();
    }

    void update()
    {
        rotor.tick();

        if(rotor.getPosition() > 0)
        {
            // rotor has moved up

            rotor.setPosition(0); // reset the rotor
            
            tp = millis();

            // release the down key and press the up key for some time

            Keyboard.release(down_key);

            Keyboard.press(up_key);

            key_pressed = true;
        }

        if(rotor.getPosition() < 0)
        {
            // rotor has moved down

            rotor.setPosition(0); // reset the rotor

            tp = millis();

            // release the up key and press the down key for some time

            Keyboard.release(up_key);

            Keyboard.press(down_key);

            key_pressed = true;
        }

        if(key_pressed && millis() - tp > BUTTON_PRESS_DURATION)
        {
            key_pressed = false;

            Keyboard.releaseAll();
        }
    }
};