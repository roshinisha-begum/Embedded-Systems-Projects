#include<regx51.h>
sbit led1=P1^2;
sbit led2=P2^6;
sbit led3=P3^6;
void delay();
void main()
{
	while(1)
	{
		led1=0;
		delay();
		led1=1;
		
		led2=0;
		delay();
		led2=1;
		
		led3=0;
		delay();
		led3=1;
	}
}
void delay()
{
	int i,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++);
	}
}
