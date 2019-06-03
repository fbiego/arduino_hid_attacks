# Arduino HID attacks

Use Arduino boards with HID capabilities such as Arduino Micro & Leornado
to inject keyboard commands.
The Arduino will emulate HID Keyboard and mouse then launch programs such
as powershell and execute commands.

## Important
The arduino will take over your mouse and/or keyboard hence it is
advisable to run the code once i.e. in `setup()` function

![Arduno Pro Micro](images/pro_micro.jpg?raw=true "Arduno Pro Micro")

## Video

**[YouTube](https://youtu.be/_H-RFe1m1ns)**

## Sketches

**[random_mouse](random_mouse/random_mouse.ino)**

moves the mouse to random positions

**[random_keyboard](random_keyboard/random_keyboard.ino)**

opens wordpad and types random characters

**[copy_files](copy_files/copy_files.ino)**

copies specified files to removable storage.

First insert removable storage and change name to match your disk

**[fast_type](fast_type/fast_type.ino)**

types pre-selected text

**[save_tree](save_tree/save_tree.ino)**

saves tree of C:\ to text file in removable storage

**[run_script](run_script/run_script.ino)**

runs a script from removable storage

**[text_loop](text_loop/text_loop.ino)**

opens wordpad and writes a string for the number of
specified times
