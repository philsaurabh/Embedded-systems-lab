/*WAP to activate buzzer by using port p1 */
#include<reg51.h>
void delay()
{
int j;
for(j=0;j<20000;j++)
{}
}
void main()
{
while(1)
{
P1=0x03;
delay();
delay();
}
}