//
// This is an easy exmaple and ioshdev is a beta version only now,
// because I'm working on a full library !
//

#include <stdlib.h>
#include <stdio.h>
#include "ioshdev.h"

int main() {
    
/*
     Recovery Mode example:
    rec_connect(); // Make connection
    rec_autoboot_true(); // Set Auto-Boot to true
    rec_saveenv(); // Use saveenv to save
    char *reboot = "reboot"; // Make char which include the last command ("reboot")
    rec_send_cmd(&reboot); // Run the command from the char reboot
*/
    
/*   Normal Mode example:
    normal_udid(); // Show UDID
*/

}
