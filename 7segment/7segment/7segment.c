#include<regx51.h>
#define segement P2
void delay();
void main(){
	segement =0xC0;delay();//0   0xC0
  segement =0xF9;delay();//1    0xF9  
  segement =0xA4;delay();//2    0xA4  
  segement =0xB0;delay();//3    0xB0  
  segement =0x99;delay();//4    0x99  
  segement =0x92;delay();//5    0x92  
  segement =0x82;delay();//6    0x82  
  segement =0xF8;delay();//7    0xF8  
  segement =0x80;delay();//8    0x80  
  segement =0x90;delay();//9    0x90
}
void delay(){
	int i,j;
	for(i=0;i<500;i++){
		for(j=0;j<500;j++);
	}
}

