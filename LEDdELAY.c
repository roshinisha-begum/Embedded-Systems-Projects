#include<regx51.h>
sbit LED1=P1^1;
sbit LED2=P2^3;
sbit LED3=P3^5;
void delay(unsigned int k);
void main(){
	LED1=1;
	delay(250);
	LED1=0;delay(250);
	LED2=1;
	delay(250);
	LED2=0;delay(250);
	LED3=1;
	delay(250);
	LED3=0;delay(250);
}
void delay(unsigned int k){
int i,j;
	for(i=0;i<k;i++){
		for(j=0;j<k;j++);
	}
}