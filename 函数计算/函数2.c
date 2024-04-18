/*
 * 课堂练习：
 *		定义一个数组，通过键盘输入10个数字，然后输出10行星号，每行星号的个数与数字一样 
 *		例如：
 *			请输入10个数字：1 2 3 4 5 6 7 8 9 10 
 *			*
 *			** 
 *			*** 
 *			**** 
 *			***** 
 *			****** 
 *			******* 
 *			******** 
 *			********* 
 *			********** 
 */
#include<stdio.h>
void main()
{
	void print_stars(int n); // 声明函数 
	
	int a[10];
	int i;
	printf("请输入10个数字：");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		print_stars(a[i]); // 调用函数 
	}
}

// 定义函数 
void print_stars(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("*");
	}
	printf("\n");
}
