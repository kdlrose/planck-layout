# my planck layout

Used mostly for writing, light coding, and maybe soon a MIDI controller into MuseScore or something. Compiled on Alpine Linux using `qmk-cli`, but I flashed with QMK Toolbox on my MacBook Air for the very stupid reason that I couldn't run `qmk flash` while in bootloader mode without attaching a second keyboard and I couldn't be bothered.

### the hardware
- Drop + OLKB Planck v7
- polycarbonate case
- steel switch plate
- Gateron KS-3 Milky Yellow Pro
- MIT layout (1x2uC)

## layers

- [0] QWERTY base
- [1] LOWER: shifted symbols, fn, delete, volume keys
- [2] RAISE: numbers
- [3] VIM: vi-style navigation with hjkl, home/pgupdn/end
- [4] ADJUST: keyboard rgb, sound, midi

The only real differences from the default are no alternate alpha layouts and adding a navigation layer, and I got rid of some keyboard settings I couldn't imagine using.

## pipe dreams

- [ ] a MIDI layer that idk, can be transposed? or I just want it to start a fifth lower than default because I'm a cellist
- [ ] I want to get rid of the arrows on the Qwerty base and just use my VIM layer, but I'm also at a loss for what can go down there instead.
- [ ] moving the function keys to the top row of their own layer. I hardly use them anyway/haven't figured out how to enable them on my Linux laptop.
- [ ] figuring out how mod combos work so I can get macOS-like special characters by Alt+Shift (I just need an em dash)
- [ ] a Russian Cyrillic layer 

