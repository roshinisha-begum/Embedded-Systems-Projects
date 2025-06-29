#include <regx51.h>

sbit R1 = P2^3;
sbit R2 = P2^4;
sbit R3 = P2^5;
sbit R4 = P2^6;

sbit C1 = P2^0;
sbit C2 = P2^1;
sbit C3 = P2^2;

#define seg P3

// 7-segment codes for digits 0–9 (common anode)
unsigned char seg_code[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99,
                            0x92, 0x82, 0xF8, 0x80, 0x90};

void delay(){
    int i, j;
    for(i = 0; i < 100; i++)
        for(j = 0; j < 1275; j++);
}

void main(){
    while(1){
        // Check Row 1
        R1=0; R2=R3=R4=1;
        if(C1==0){ seg=seg_code[1]; while(C1==0); delay(); }  // '1'
        else if(C2==0){ seg=seg_code[2]; while(C2==0); delay(); } // '2'
        else if(C3==0){ seg=seg_code[3]; while(C3==0); delay(); } // '3'

        // Check Row 2
        R2=0; R1=R3=R4=1;
        if(C1==0){ seg=seg_code[4]; while(C1==0); delay(); } // '4'
        else if(C2==0){ seg=seg_code[5]; while(C2==0); delay(); } // '5'
        else if(C3==0){ seg=seg_code[6]; while(C3==0); delay(); } // '6'

        // Check Row 3
        R3=0; R1=R2=R4=1;
        if(C1==0){ seg=seg_code[7]; while(C1==0); delay(); } // '7'
        else if(C2==0){ seg=seg_code[8]; while(C2==0); delay(); } // '8'
        else if(C3==0){ seg=seg_code[9]; while(C3==0); delay(); } // '9'

        // Check Row 4
        R4=0; R1=R2=R3=1;
        if(C1==0){ seg=0xFF; while(C1==0); delay(); } // '*'
        else if(C2==0){ seg=seg_code[0]; while(C2==0); delay(); } // '0'
        else if(C3==0){ seg=0xFF; while(C3==0); delay(); } // '#'
    }
}
