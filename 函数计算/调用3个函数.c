#include<stdio.h>

float a,b,c;
void main()

{	
	void average(float i,float j,float k);		//声明函数
	void max(float i,float j,float k);
	void max(float i,float j,float k);

	float i,j,k; 
	printf("请输入3个数字：");
	scanf("%f%f%f",&i,&j,&k);
	average(i,j,k);
	max;
	min;
	printf("平均值是：%f\n 最大值为：%f\n 最小值为:%f\n",a,b,c);	

} 
 void average(float i,float j,float k)
{
	float avg;
	avg=(a+b+c)/3.0;
	a = avg;
} 
void  max(float i,float j,float k)  
{
	if (i>k&&i>j)
	{
		b=i;		
	}
	else if(j>i&&j>k);
	{
		b=j;
	}
	else
	{
		b=k;
	}
}
void  min(float i,float j,float k)  
{
	if (i>k&&j>k)
	{
		b=k;		
	}
	else if(j>i&&k>i);
	{
		b=i;
	}
	else
	{
		b=j;
	}
}
