#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("请输入a，b的值:\n");
	scanf("%d%d",&a,&b);
	printf("输入时ab的值为：%d,%d\n",a,b);
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
		 
	}
	printf("输出结果为：a=%d,b=%d\n",a,b); 
 }
