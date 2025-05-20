# 🕹️ Retro Pong Console

![Pong Console](<insert-image-url-here>)

This is a DIY hardware controller for playing a browser-based [Pong](https://freepong.org/) game—built to recreate the feel of the original 1972 arcade experience. It uses an Arduino Pro Micro, rotary encoders for paddles, and a few buttons for gameplay control.

## 🎮 What It Does

- Lets you play a [Pong clone](https://freepong.org/) in your browser using physical knobs and buttons.
- The console connects via USB and simulates keyboard inputs.
- Paddle movement is controlled with rotary encoders.
- Buttons are mapped to keys like `P`, `R`, and `Esc` for pause, restart, and quit.

## ⚙️ How It Works

The Arduino Pro Micro is used for its native USB HID capabilities. When you turn the rotary encoders or press buttons, the board sends keyboard signals to the browser game:

- **Rotary Encoders** → Paddle movement (mapped to keypresses).
- **Buttons** → Quit (`Esc`), Pause (`P`), Restart (`R`).

Just plug it in, open the Pong game in your browser, and you're ready to play.

## 🧩 Libraries Used

- [**Bounce2** (v2.71)](https://github.com/thomasfredericks/Bounce2) — For debounced button input.
- [**RotaryEncoder** by Matthias Hertel (v1.5.3)](https://github.com/mathertel/RotaryEncoder) — For smooth rotary encoder handling.

## ▶️ Project Demo

Watch the video: [YouTube Video Showcase](<insert-youtube-link-here>)

---

