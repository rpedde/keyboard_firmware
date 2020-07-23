# what #
Some firmware from the various keyboards I've messed with.

https://github.com/rpedde/r68
https://github.com/rpedde/r60-std


# how #
so symlink the pedde_heavy_industries into the keyboard directory in a qmk
checkout.  Last qmk checkout I built this stuff on was b7dc2eb, but newer
should probably work.

```
$ make pedde_heavy_industries/r68rev1:default
```

pop the keyboard into bootloader mode and

```
dfu-programmer atmega32u4 erase
dfu-programmer atmega32u4 flash pedde_heavy_industries_r68rev1_default.hex
dfu-programmer atmega32u4 reset
```

should be golden.  These talk the via protocol, but since I can't seem to make
via run, I've not bothered to try and make these more via compatible

# then what #

probably can use this to do dynamic key mappings:

https://github.com/rpedde/kb_prog

Think of it like via, but dumb and in pygame.