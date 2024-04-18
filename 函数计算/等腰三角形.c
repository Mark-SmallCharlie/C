#include<stdio.h>
void main()
{	
	int a, b, c;
		printf("请输入三边的边长:\n");
		scanf("%d%d%d",&a,&b,&c);
		if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
		{
			if (a == b||a == c||b == c)
				{
				printf("是等腰三角形。");
				}
			else 
				{	
				printf("不是等腰三角形。") ; 
				}
		}
		else
		{
			if (a==b&&b==c&&c==a)
			{
				printf("是等边三角形。") ; 
			}
			else
			{
				printf("不是等边三角形。") ; 
			}
		printf("不是等腰三角形。") ; 
		}
}

