/*
 * 课堂练习：
 *		设计一个整型数组输入函数，传入数组和要输入的整数个数，把数据填入数组 
 *		设计一个整型数组输出函数，传入要输出的数组和数组长度，输出数组的数据 
 * 		设计一个数组平均值计算函数，平均值通过返回语句返回
 *		在主函数中调用此函数，并输出平均值 
 */
#include<stdio.h>
void int_arr_input(int a[],int n); // 声明函数 
void int_arr_output(int a[],int n); // 声明函数 
void main()
{
	int a[10],b[5];
	int_arr_input(a,10); // 调用函数 
	int_arr_output(a,10); // 调用函数 
	
	int_arr_input(b,5); // 调用函数
	int_arr_output(b,5); // 调用函数 
}
// 定义函数 
void int_arr_input(int a[],int n)
{
	int i;
	printf("请输入%d个整数：",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
// 定义函数
void int_arr_output(int a[],int n)
{
	int i;
	printf("数组内容是：");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

