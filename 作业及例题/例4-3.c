#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("������a��b��ֵ:\n");
	scanf("%d%d",&a,&b);
	printf("����ʱab��ֵΪ��%d,%d\n",a,b);
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
		 
	}
	printf("������Ϊ��a=%d,b=%d\n",a,b); 
 }
