#include<stdio.h>
void main()
{	
	int a, b, c;
		printf("���������ߵı߳�:\n");
		scanf("%d%d%d",&a,&b,&c);
		if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
		{
			if (a == b||a == c||b == c)
				{
				printf("�ǵ��������Ρ�");
				}
			else 
				{	
				printf("���ǵ��������Ρ�") ; 
				}
		}
		else
		{
			if (a==b&&b==c&&c==a)
			{
				printf("�ǵȱ������Ρ�") ; 
			}
			else
			{
				printf("���ǵȱ������Ρ�") ; 
			}
		printf("���ǵ��������Ρ�") ; 
		}
}

