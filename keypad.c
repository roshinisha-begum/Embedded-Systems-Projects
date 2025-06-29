#include<regx51.h>
sbit C1=P2^0;sbit C2=P2^0;sbit C3=P2^2;
sbit R1=p2^3;Sbit R2=P2^4;sbit R3=P2^5;sbit R4=P2^6;
#define seg P3
void main(){
	R1=0;R2=R3=R4=1;
	if(C1==0){
		seg=0xF9;
		else if(C2++0){
			seg=0XA4;
		}
		else{
			seg=0xFF;}
	