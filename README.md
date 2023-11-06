# my planck layout

Used mostly for writing, light coding, and sometimes as MIDI input for
arrangement and scoring (not production). Compiled on Alpine Linux with
`qmk-cli`, but flashed on macOS QMK Toolbox since the CLI didn't believe it was
in DFU mode.

### hardware

Drop + OLK Planck v7, polycarbonate case and steel switch plate, Gateron KS-3
Milk Yellow Pros

### layers

1. **Base**: QWERTY
2. **Lower**: symbols, delete, media controls
3. **Raise**: numbers, more symbols
4. **Vim**: vi-style navigation with haphazard home/page/end around
5. **Function**: only use these on my MacBook Air and rarely
6. **Adjust**: RGB and audio, midi settings
7. **Cello**: 3 octaves from C3 😡, see issues
8. **Guitar**: 3 octaves from E3, see issues

## issues 

- `MIDI_ADVANCED` pitches are three octaves too high. This is too weird an issue
  for me to fathom. From looking at other Plancks configured as MIDI
  controllers, I guess it's unique to the rev7. My fix is writing `keymap.c` as
  low as possible, and I was always planning to add `MI_OCTU` and `MI_OCTD`. It's
  not disastrous, but it's both inaccurate and more annoying to someone else who
  might need really low bass.

### tasks

- [ ] get rid of the arrows on the Qwerty base and just use the vim layer
- [ ] unicode layers: mac option-like symbols, cyrillic 

