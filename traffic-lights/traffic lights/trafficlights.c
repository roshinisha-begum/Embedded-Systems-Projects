#include<regx51.h>
sbit R1=P2^0;sbit Y1=P2^1;sbit G1=P2^2;
sbit R2=P2^3;sbit Y2=P2^4;sbit G2=P2^5;
sbit R3=P3^3;sbit Y3=P3^4;sbit G3=P3^5;
sbit R4=P3^0;sbit Y4=P3^1;sbit G4=P3^2;
void delay(unsigned int k);
void main(){
	R1=0;R2=1;R3=1;R4=1;
	Y1=0;Y2=0;Y3=0;Y4=0; 
	G1=1;G2=0;G3=0;G4=0; //green on in pole one
  delay(1500);
	R2=0; ///red off
	Y2=1;delay(500); //yellow on
	Y2=0;  ///yelllow off
	G1=0;R1=1;
	//CYLCE
	G2=1;delay(1000);
	R3=0;Y3=1;delay(500);
	Y3=0;
	G2=0;R2=1;
	//CYCLE
	G3=1;delay(1000);
	R4=0;Y4=1;
	delay(500);
	Y4=0;
	G3=0;R3=1;
	//cycle
	G4=1;delay(1000);
	R1=0;R4=0;
	Y1=1;	delay(500);
	Y1=0;
	G4=1;

}
void delay(unsigned int k){
	int i,j;
	for(i=0;i<k;i++){
		for(j=0;j<500;j++);
	}
}
//g2 on g1 off r 1  on