# Arduino HID attacks

Use Arduino boards with HID capabilities such as Arduino Micro & Leornado
to inject keyboard commands.
The Arduino will emulate HID Keyboard and mouse then launch programs such
as powershell and execute commands.

## Important
The arduino will take over your mouse and/or keyboard hence it is
advisable to run the code once ie in `setup()` function

## Sketches
### random_mouse
moves the mouse to random positions

### random_keyboard
opens wordpad and types random characters

### copy_files
copies specified files to removable storage
First insert removable storage and change name to match your disk

### fast_type
types pre-selected text

### save_tree
saves tree of C:\ to text file in removable storage

### run_script
runs a script from removable storage
