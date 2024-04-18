#include<stdio.h>
void main()
{
	int x,y,a;
	sacnf("«Î ‰»Îx£∫%d\n",&x);
	if (x<0)
	{ 
	  printf("y=0");
	}
	else	if (0<x<=10)
			{
			printf("y=x%d\n",x);
			}
	else    if (10<x<=20)
			{
			printf("y=10");
			}

	else 
	{
		if (20<x<40)
			{
			a= -0.5+20;
			printf("y=%d\n",a);
			}
	}
 } 
