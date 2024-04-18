#include<stdio.h>
#define PI 3.14159265354   			/*使用符号表示圆周率*/ 
void main()

{
	double r,l,s;
	printf("请输入圆的半径:");
	scanf("%lf",&r);
	l =2*PI*r*r;s=PI*r*r;
	printf("圆的周长为%f,圆的面积为%f\n",l,s);
	
} 
