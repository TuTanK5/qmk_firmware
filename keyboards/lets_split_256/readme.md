Let's Split 256
======

This readme and most of the code are from Let's Split, which in turn are from https://github.com/ahtn/tmk_keyboard/

Split keyboard firmware for Arduino Pro Micro or other ATmega32u4
based boards.

## Hardware Build Guide

**Hardware files for the Let's Split 256 are now stored at https://github.com/TuTanK5/LetsSplit256

## First Time Setup
Download and install qmkmsys following guide from https://msys.qmk.fm/

Download or clone the `qmk_firmware` repo and setup qmkmsys to its top level directory `qmk_firmware`. Once your build environment is setup, you'll be able to generate the default .hex in qmkmsys CLI using:

```
$ qmk compile -kb lets_split_256 -km default
```

You will see a lot of output and if everything worked correctly you will see the built hex file:

```
lets_split_256_rev1_default.hex
```

If you would like to use one of the alternative keymaps, or create your own, copy one of the existing [keymaps](keymaps/) and run make like so:


```
$ qmk compile -kb lets_split_256 -km default
```

If everything worked correctly you will see a file:

```
lets_split_256_rev1_YOUR_KEYMAP_NAME.hex
```

For more information on customizing keymaps, take a look at the primary documentation for [Customizing Your Keymap](/docs/faq_keymap.md) in the main readme.md.

## Flashing

You can flash your firmware using QMK toolbox, or follow the guide below using a Linux type command prompt (e.g. git BASH, mingw...)

### Flash EEPROM

The EEPROM is used to store whether the half is left handed or right handed. This makes it so that the same firmware file will run on both hands instead of having to flash left and right handed versions of the firmware to each half. To flash the EEPROM file:

From the top level `qmk_firmware` directory run while your Pro Micro is in bootloader mode:

With $(COM_PORT) being the port of your Pro Micro (e.g. com4)

```
avrdude -p atmega32u4 -P $(COM_PORT) -c avr109 -U eeprom:w:"./quantum/split_common/eeprom-lefthand.eep"
```
and similarly for right half
```
avrdude -p atmega32u4 -P $(COM_PORT) -c avr109 -U eeprom:w:"./quantum/split_common/eeprom-righthand.eep"
```

Note that EEPROM only needs to be flashed once. If you change your keymaps later on, you don't need to flash EEPROM again.

### Flash firmware

From the top level `qmk_firmware` directory run while your Pro Micro is in bootloader mode:

```avrdude -p atmega32u4 -P $(COM_PORT) -c avr109 -U flash:w:lets_split_256_rev1_default.hex```

Note that you need to program both halves, but you have the option of using
different keymaps for each half. You could program the left half with a QWERTY
layout and the right half with a Colemak layout using bootmagic's default layout option.
Then if you connect the left half to a computer by USB the keyboard will use QWERTY and Colemak when the
right half is connected.
