#include <reg51.h>
#include <stdio.h>

sbit s0=P1^0;
sbit s1=P1^1;
sbit s2=P1^2;
sbit s3=P1^3;
sbit s4=P1^4;
sbit s5=P1^5;

sbit fan=P2^0;
void msdelay(unsigned int time);
void main()
 { 
   while (1){
      if(s0==0)
      fan=0;
      
      if(s1==0)
      {fan=0;
      msdelay(8);
      fan=1;
      msdelay(2);}
      
      if(s2==0)
      {fan=0;
      msdelay(6);
      fan=1;
      msdelay(4);}
      
      if(s3==0)
      {fan=0;
      msdelay(4);
      fan=1;
      msdelay(6);}
      
      if(s4==0)
      {fan=0;
      msdelay(2);
      fan=1;
      msdelay(8);}
      
      if(s5==0)
      fan=1;
     
     else fan=0;
 }
 }
 
 void msdelay(unsigned int time){
 unsigned int i,j;
 for(i=0;i<time;i++)
 for(j=0;j<113;j++);}