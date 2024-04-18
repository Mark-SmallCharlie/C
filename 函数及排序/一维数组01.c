#include<stdio.h>							//输入10个100内的数 
void main()                                 //求和10个数去掉俩个最大最小 
{                                           //x = 平均值 
	unsigned int a[10];                     //y =x**2+2*x+10
	int i, j,max,min,sum;                   //判断y是否大于5000 
	float x,y;             
	printf("请输入10个100以内的整数：");   
	for(i=0;i<=10;i++)                       //判断是否打印姓名 
{
	scanf("%d",&a[i]);                       //输入 
}
	for (i=0;i<=10;i++)                     //找最大最小 以次比较 
printf("%4d",a[i]);                         //max=a[0];
	min=a[10];                              //min=a[0];
	for(i=1;i<=10;i++)                      //for(i=1;i<10;i++)	
if (min>a[i])                               
		min=a[i];
	printf("\n最小值为%d\n",min);
	max=a[0];
	for(i=1;i<10;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
		if (min>a[i])
		{
			min=a[i];
		}
	}
		printf("最大值为:%d\n",max);
	sum=0;
    for(i=0;i<10;i++)
    {
    	sum+=a[i];
	}
	sum-=max;
	sum-=min;
	x = sum/8;
	y = x*x+2*x+10;
	if(y<5000)
	{
		printf("X");
	}
	else
	{	
		printf("mingzi:charile") ;
	}
}
