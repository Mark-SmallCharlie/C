#include<stdio.h>
void main()
{
	float x,y;
	printf("Please input x:");
	scanf("	%f",&x);
	if(x<3) 
	{
		y =x+3;
	}
	else
	{
		if(x=3)
			y =x;
		else
			y =x-3;
	}
	printf("y=%f\n",y);
}
