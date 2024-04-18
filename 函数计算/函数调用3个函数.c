/*
 * 课堂练习：
 *	定义3个全局变量； 
 *	定义3个无返回值函数，有3个形式参数，
 *		分别用于计算3个参数的平均值、最大值、最小值，将结果存入全局变量中；
 *	在主函数中输入3个数，调用上述3个函数，然后输出3个全局变量的值； 
 */
#include<stdio.h>

float a,b,c;
int x,y,z;

void main()
{
	while(1)
	{
	void average(float i,float j,float k);
	void max(float i,float j,float k);
	void min(float i,float j,float k);
	
	float i,j,k;
	printf("请输入3个数：");
	scanf("%f%f%f",&i,&j,&k);
	average(i,j,k);
	max(i,j,k);
	min(i,j,k);
	printf("平均值：%f\n最大值：%f\n最小值：%f\n",a,b,c);
	}
}

void average(float i,float j,float k)                //求平均值； 
{
	float avg;
	avg=(i+j+k)/3;                     
	a=avg;
}

void max(float i,float j,float k)					//最大值 
{
	if(i>j&&i>k)
	{
		b=i;
	}
	else if(j>i&&j>k)
	{
		b=j;
	}
	else
	{
		b=k;
	}
}

void min(float i,float j,float k)                   //最小值 
{
	if(i<j&&i<k)
	{
		c=i;
	}
	else if(j<i&&j<k)
	{
		c=j;
	}
	else
	{
		c=k;
	}
}

	// 排序 
	/*
void paix(float i;float j;float k) 
{
	for(x=0;x<10-1;x++)
	{
		for(y=0;y<10-1-i;y++)
		{
			if(score[j]<score[j+1])             //依次从大到小排序 
			{
				t=score[j];
				score[j]=score[j+1];	
				score[j+1]=t;
			}
		}
	}
	// 输出排序结果
	printf("排序结果：");
	for(x=0;x<10;x++)
	{
		printf("%.2f ",score[i]);
	}
	printf("\n");
	*/
