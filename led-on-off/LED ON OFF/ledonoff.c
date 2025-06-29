#include<regx51.h>    //Header File
sbit LED1=P2^0; 
sbit LED2=P1^0;
sbit LED3=P3^0;//LED Connected to Port2 with 0th pin
//datatype ComponentName=PORTNUMBER^pin number;
void main(){
	LED1=1;
LED2=1;
LED3=0;  //LED On
}