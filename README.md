# my planck layout

Used mostly for writing, light coding, and sometimes as MIDI input for
arrangement and scoring (not production). Compiled on Alpine Linux with
`qmk-cli`, but flashed on macOS QMK Toolbox since the CLI didn't believe it was
in DFU mode.

### hardware

![ice cream chillin chillin](https://github.com/sailorfe/planck-layout/blob/main/assets/render.png?raw=true)

Drop + OLK Planck v7, polycarbonate case and steel switch plate, Gateron KS-3
Milk Yellow Pros

## layers

### QWERTY base

![0 qwerty](https://github.com/sailorfe/planck-layout/blob/main/assets/0-base.png?raw=true)

Pretty much the default, but with additional Function and Vim modifiers. I
dream of getting rid of the arrows, but can't think of what to replace them with.
I don't actually code enough to want brackets on my base.

### Lower // shifted symbols

![1 lower](https://github.com/sailorfe/planck-layout/blob/main/assets/1-symbols.png?raw=true)

I want to add unicode symbols like Mac's `option` shortcuts, mainly em and en dash.

### Raise // numbers

![2 raise](https://github.com/sailorfe/planck-layout/blob/main/assets/2-numbers.png?raw=true)

### Vim navigation

![3 vim](https://github.com/sailorfe/planck-layout/blob/main/assets/3-vim.png?raw=true)

I'm trying to approximate Vim's `G` and `gg` shortcuts plus `Ctrl + b` and `Ctrl 
+ f` for page navigation. Also threw in `Esc` since I'm not sure I know what key
transparency actually points to.

### Function and numpad

![4 fn](https://github.com/sailorfe/planck-layout/blob/main/assets/4-fn-pad.png?raw=true)

### Adjust

![5 adjust](https://github.com/sailorfe/planck-layout/blob/main/assets/5-adjust.png?raw=true)

Nearly the default except I added `EE_CLR`, MIDI on/off, and toggles for my two MIDI layers so far.

### MIDI_ADVANCED instruments

![6 cello](https://github.com/sailorfe/planck-layout/blob/main/assets/6-midi.png?raw=true)

I found this profoundly confusing and the documentation quite sparse, and it
doesn't help that I've never owned a MIDI controller before. I assumed QMK
followed scientific pitch, so I created a layer each starting with the lowest
open strings in standard tuning for my instruments (C2 and E2), but these played
C5 and E5 while `MI_C4` played C7 rather than middle C. Then I actually read
every row of the keycodes table and saw the pitch codes stopped at `MI_Fs5`. I
ended up with this palette of pitch shift options, the most used one being
`MI_OC1` to get me into bass clef.

You might wonder why I bother with two layers. Practically, I'm usually
arranging bedroom pop bullshit for cello and guitar and switch between the two
quickly. But I am also just very confused. I tried `LM(layer, mod)` since I
often hit undo and copy and such while scoring, but it doesn't seem to work so
far.

## tasks

- [  ] Unicode characters on the symbols layer. All I really want are my em and
  en dashes, and maybe curly quotes.
- [  ] Trouble shoot layer + mod
