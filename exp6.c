/*WAP for LED interfacing to toggle all bits of port P1 in C*/
#include<reg51.h>
void ms_delay(unsigned int);
void main(void)
{
while(1)
{
P1=0x00;
ms_delay(500);
P1=0xFF;
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
