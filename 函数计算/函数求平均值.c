#include<stdio.h>
void main()
{
	while(1)
	{	
	float average(int a,int b,int c);		//声明函数
	float mianji(float avg); 
	int a,b,c;
	printf("请输入3个数字：");
	scanf("%d%d%d",&a,&b,&c);
	float avg;
	avg = average(a,b,c);
	printf("平均值是：%f\n",avg);
	float s;
	s = mianji(avg);
	printf("圆的面积是：%f\n",s);
	}

}
 
//定义求平均的函数；平均值为圆的半径； 
float average(int a,int b,int c)
{
	float avg;
	avg=(a+b+c)/3.0;
	return avg;
} 
//定义求圆面积的函数；
float mianji(float avg)
{
	float s;
	s=(avg*3.1415926)*(avg*3.1415926);
	return s;
 } 

