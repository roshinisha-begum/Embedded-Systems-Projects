#include <regx51.h>  // Header file for AT89C51

sbit LED = P3^0;    // Define LED at port 3.0
sbit BUTTON = P1^1; // Define Button at port 1.1

void main() {
    LED = 0;       // Initially turn OFF LED (Assuming active high)
    
    while (1) {
        if (BUTTON == 0) {  // Button pressed (active low)
            LED = 1;        // Turn ON LED
        } else {
            LED = 0;        // Turn OFF LED
        }
    }
}
