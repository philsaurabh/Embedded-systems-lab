/*WAP to toggle d0bit of port P2 50,000 times in c */
#include<reg51.h>
sbit mybit=P2^0;
void ms_delay(unsigned int);
void main(void)
{
	unsigned int x;
for(x=0;x<=50000;x++)
{
mybit=0;
ms_delay(500);
mybit=1;
ms_delay(500);
}
}
void ms_delay(unsigned int y)
{
unsigned int x,z;
{
for(x=0;x<=y;x++)
{
for(z=0;z<=1275;z++)
{}
}
}
}