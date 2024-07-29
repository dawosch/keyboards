# Instructios for the Sofle RGB Keyboard
Original author: https://josefadamcik.github.io/SofleKeyboard/build_guide_rgb.html

# Requirements
- QMK CLI - https://docs.qmk.fm/cli

**_Note: On Windows the compilation can take quite long, better use the cli in WSL_**

# Compiling
First, place the `keymap.c` file in the following directory: `/qmk_firmware/keyboards/sofle/keymaps/dawosch/`

Then execute the folowing command: `qmk compile -kb sofle -km dawosch -e CONVERT_TO=promicro_rp2040 -c`

# Flashing
After compiling the firmware is within the `/qmk_firmware/.build` directory.

You need to bring the keyboard into the boot mode by pressing and holding `ESC` and then plugin the usb-c cable.

The copy the `.uf2` file into the opening `rp*` folder.

**_Note: You need to do this for each keyboard part. You need to disconnect the to parts from each other for flashing_**


# Rotary encoders
It maybe happen that the rotary encoders will work the wrong direction.

If so you need to change the pins in this file: `/qmk_firmware/keyboards/sofle/rev1/keyboard.json`

There you will find the settings for `encoder.rotary` and `split.encoder.right.rotary`

Change the pin settings for `pin_a` and `pin_b` with each other.
