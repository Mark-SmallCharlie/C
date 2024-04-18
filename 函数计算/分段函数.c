#include<stdio.h>
void main()
{
	float x,y;
	printf("Please input x:");
	scanf("	%f",&x);
	if(x<1) 
	{
		y =x;
	}
	else
	{
		if(1<=x&&x<10)
			y =2*x-1;
		else
			y =3*x-5;
	}
	printf("y=%f\n",y);
}
