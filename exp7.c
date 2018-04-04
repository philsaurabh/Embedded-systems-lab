/*WAP to display 00 to FF on port P0 in C*/
#include<reg51.h>
void main(void)
{
	unsigned char x;
	for(x=0;x<=255;x++)
	{
		P0=x;
	}
}