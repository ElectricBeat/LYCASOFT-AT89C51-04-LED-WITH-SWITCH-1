#include<reg51.h>

void delay()
{
int i,j;
for(i=0;i<10;i++)
	for(j=0;j<1000;j++);
}

sbit LED = P2^0;
sbit SW = P2^1;

void main()
{
  P2 = 0x02;

	while(1)
	{
		if(SW == 0 )
		{
			LED = 1;
		}
		else 
			LED = 0;	
	}
}