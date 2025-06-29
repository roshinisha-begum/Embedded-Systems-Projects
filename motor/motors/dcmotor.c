#include<regx51.h>
#define motor P2
void delay();
void main(){
	motor=0X65;delay();  //M1M2 FW
	motor=0xA6;delay();  //M1M2 BW
	motor=0xA5;delay();  //M1 FW M2 BW
		motor=0x66;delay();  //M1 BW M2 FW
	 	motor=0x05;delay();  //M1 FW
	 	motor=0x06;delay();  //M1 BW
   	motor=0x60;delay();  //M2 FW
  	motor=0xA0;delay();  //M2 BW
}
void delay(){
	int i,j;
	for(i=0;i<1000;i++){
		for(j=0;j<1000;j++);
	}
}


	  

	

	