/*WAP to display 0000 to 9999 on seven segment display in C*/
#include<reg51.h>
char num[10]={0xbf,0x86,0xdb,0xcf,0xeb,0xed,0xfd,0x87,0xff,0xef};
void delay(unsigned int);
void main(void)
{
	int x;
for(x=0;x<=9;x++)
{
P2=0x0f;
P0=num[x];
delay(50);
}
}
void delay(unsigned int y)
{
unsigned int z,x;
{
for(z=0;z<=y;z++)
{
for(x=0;x<=1275;x++)
{}
}
}
}