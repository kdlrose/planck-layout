# my planck layout

Used mostly for writing, light coding, and sometimes an MIDI controller for
arrangment (not production). Compiled on Alpine Linux with `qmk-cli`, but
flashed on macOS with QMK Toolbox for the very stupid reason that I can't figure
out how to run `qmk flash` in bootloader mode or enter bootloader after running
it without attaching a second keyboard.

### hardware
- Drop + OLKB Planck v7
- polycarbonate case
- steel switch plate
- Gateron KS-3 Milky Yellow Pro

### layers

1. QWERTY base
2. Lower: symbols, delete, media controls
3. Raise: numbers, more symbols
4. Vim: vi-style navigation with haphazard home/page/end around
5. Function: only use these on my MacBook Air and rarely
6. Adjust: RGB and audio, midi settings
7. Cello: 3 octaves from C2, see issues
8. Guitar: 3 octaves from E2, see issues

## issues 

- MIDI_ADVANCED pitches are off by two octaves. From checking out other Planck
  source codes and QMK midi controllers in general, this seems unique to the 
  rev7. My fix is writing `keymap.c` two octaves down, but this is both
  inaccurate and untenable for anyone who needs subterranean bass notes.

### tasks

- [ ] get rid of the arrows on the Qwerty base and just use the vim layer
- [ ] unicode layers: mac option-like symbols, cyrillic 

