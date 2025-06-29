#include<regx51.h>  //header file
#define LED P2     //component decelartion
void delay();//delay funtion
void main(){
	LED=0xFF;delay();  //all led on
	LED=0X00;delay();   //all led off
	LED=0XAA;delay();    //odd sequence on
	LED=0X00;delay();
	 LED=0X55;delay();    //even sequence on
	LED=0X00;delay();
	LED=0X00;delay();
}
void delay()
	{
	int i,j;
	for(i=0;i<250;i++){
		for(j=0;j<250;j++);
	}
}
