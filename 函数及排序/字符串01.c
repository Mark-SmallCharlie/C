#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100],str3[100];
	int x,y;
	printf("�������ַ�a��");
	gets(a);
	scanf("%/n",&a);
	printf("�������ַ�b��");
	gets(a);
	scanf("%/n",&b);
	x=strlen(a);
	printf("���ȣ�%d\n",x);
	y=strlen(b);
	printf("���ȣ�%d\n",y);
	if (x>y)
		{
		strlwr(b);
		puts(b);
		strupr(a);
		puts(a);
		}
	else if (x==y)
	{
		printf("ֱ�������",a);
		printf("���ȣ�%d\n",x);
	}
	else
	{
		printf("tx");
	}
 } 
