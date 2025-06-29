#include <regx51.h>              // Header file for 8051 microcontroller

#define segement P2            // Define 7-segment display port
#define button P1                // Define button input port                  // Function prototype for delay

void main() {
    while (1) {                  // Infinite loop to keep checking button status

        if (button == 0xFE) {         // Button 1 pressed (P1.0 = 0)
            segement = 0xF9;        // Display '1'
             
        }
        else if (button == 0xFD) {    // Button 2 pressed (P1.1 = 0)
            segement = 0xA4;        // Display '2'
             
        }
        else if (button == 0xFB) {    // Button 3 pressed (P1.2 = 0)
            segement = 0xB0;        // Display '3'
             
        }
        else if (button == 0xF7) {    // Button 4 pressed (P1.3 = 0)
            segement = 0x99;        // Display '4'
             
        }
        else if (button == 0xEF) {    // Button 5 pressed (P1.4 = 0)
            segement = 0x92;        // Display '5'
             
        }
        else if (button == 0xDF) {    // Button 6 pressed (P1.5 = 0)
            segement = 0x82;        // Display '6'
             
        }
        else if (button == 0xBF) {    // Button 7 pressed (P1.6 = 0)
            segement = 0xF8;        // Display '7'
             
        }
        else if (button == 0x7F) {    // Button 8 pressed (P1.7 = 0)
            segement = 0x80;        // Display '8'
             
        }
        else {
            segement = 0xFF;        // No button pressed — blank display
        }
    }
}


			





