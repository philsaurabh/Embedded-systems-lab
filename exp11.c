/*WAP for rotating the stepper motor clockwise or anticlockwise*/
#include<reg51.h>
sbit m1=P0^0;
sbit m2=P0^2;
sbit m3=P0^1;
sbit m4=P0^3;
void delay(unsigned int x)
{
unsigned int a;
for(a=0;a<=x;a++)
{}
}
void move_clk(int y;int v)
{
int a;
	for(a=0;a<=y;a++)
{
m1=1;m2=0;m3=0;m4=0;
	delay(v);
	m1=0;m2=1;m3=0;m4=0;
	delay(v);
	m1=0;m2=0;m3=1;m4=0;
	delay(v);
	m1=0;m2=0;m3=0;m4=1;
	delay(v);
}
}
void move_anticlk(int y;int v)
{
int a;
	for(a=0;a<=y;a++)
{
  m1=0;m2=0;m3=0;m4=1;
	delay(v);
	m1=0;m2=0;m3=1;m4=0;
	delay(v);
	m1=0;m2=1;m3=0;m4=0;
	delay(v);
	m1=1;m2=0;m3=0;m4=0;
	delay(v);
}
}
void motor_stop()
{
m1=0;m2=0;m3=0;m4=1;
}
int main()
{
	mov_clk(50,1000);
	motor_stop();
 delay(6000);
 mov_anticlk(50,1000);
	motor_stop();
 delay(6000);
	while(1)
}
