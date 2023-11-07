# my planck layout

Used mostly for writing, light coding, and sometimes as MIDI input for
arrangement and scoring (not production). Compiled on Alpine Linux with
`qmk-cli`, but flashed on macOS QMK Toolbox since the CLI didn't believe it was
in DFU mode.

### hardware

Drop + OLK Planck v7, polycarbonate case and steel switch plate, Gateron KS-3
Milk Yellow Pros

## layers

### QWERTY base

![0 qwerty](https://github.com/sailorfe/planck-layout/blob/main/assets/0_qwerty.jpg?raw=true)

Pretty much the default, but with additional Function and Vim modifiers. I dream of getting rid of the arrows, but can't think of what to replace them with. I don't actually code enough to want brackets on my base.

### Lower // shifted symbols

![1 lower](https://github.com/sailorfe/planck-layout/blob/main/assets/1_lower.jpg?raw=true)

I want to add unicode symbols like Mac's `option` shortcuts, mainly em and en dash.

### Raise // numbers

![2 raise](https://github.com/sailorfe/planck-layout/blob/main/assets/2_raise.jpg?raw=true)

### Vim navigation

![3 vim](https://github.com/sailorfe/planck-layout/blob/main/assets/3_vim.jpg?raw=true)

I'm trying to approximate Vim's `G` and `gg` shortcuts plus `Ctrl + b` and `Ctrl + f` for page navigation. Also threw in Vim and non-Vim shortcuts like Z for undo, just in case?

### Function and numpad

![4 fn](https://github.com/sailorfe/planck-layout/blob/main/assets/4_fn.jpg?raw=true)

Not entirely convinced I need either of these, but the numpad is more likely to see use if I ever get back into writing knitting patterns.

### Adjust

![5 adjust](https://github.com/sailorfe/planck-layout/blob/main/assets/5_adj.jpg?raw=true)

Nearly the default except I added `EE_CLR`, MIDI on/off, and toggles for my two MIDI layers so far.

### MIDI_ADVANCED instruments

![6 midi](https://github.com/sailorfe/planck-layout/blob/main/assets/6_midi.jpg?raw=true)

See issues.

## issues 

- `MIDI_ADVANCED` pitches are three octaves too high. This is too weird an issue
  for me to fathom. From looking at other Plancks configured as MIDI
  controllers, I guess it's unique to the rev7. My fix is writing `keymap.c` as
  low as possible, and I was always planning to add `MI_OCTU` and `MI_OCTD`. It's
  not disastrous, but it's both inaccurate and more annoying to someone else who
  might need really low bass.

