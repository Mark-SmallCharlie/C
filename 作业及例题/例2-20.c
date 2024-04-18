#include<stdio.h>
void main()
{
	int m=2 ,n =3, a =1, b =2;
	int x, y;
	x=(m=a>b)&&(n=a<b);
	printf("x=%d,m=%d,n=%d\n",x,m,n);
	y=(m=a>b)||(n=a<b);
	printf("y=%d,m=%d,n=%d\n",y,m,n);
 } 
