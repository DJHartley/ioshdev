<pre>
 _           _         _            
(_) ___  ___| |__   __| | _____   __
| |/ _ \/ __| '_ \ / _` |/ _ \ \ / /
| | (_) \__ \ | | | (_| |  __/\ V / 
|_|\___/|___/_| |_|\__,_|\___| \_/  
                                    
</pre>
Beta 1 because I'm working on a full library too.
### Why ioshdev?
ioshdev is a small header file which was developed for <br>
iOS communication, unimportant which mode is the iDevice in! 
<pre>
 ___________________________________ 
/ ioshdev, a header file for easier \
\ communication with iOS devices.   /
 ----------------------------------- 
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||               
</pre>

## Communication?
1.   Recovery Mode 
2.   Normal Mode 
3.   DFU Mode 

------------------------------------------------------------

## HOW TO USE
- Include ioshdev.h in your C file.<br>
Looks so: `#include "ioshdev.h"`

- Compile your project.

Looks so:

	gcc -o project project.c -lusb-1.0 -framework CoreFoundation -framework MobileDevice -F/System/Library/PrivateFrameworks


## CREDITS
+ [@cal0x](http://twitter.com/cal0x) (ioshdev)
+ [libusb](http://www.libusb.org) (libusb)
