#include<stdio.h>
void main()
{
	int y;
	printf("���������:");
	scanf("%d",&y);
	if (y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
			{
				printf("%d�������ꡣ",y); 
			}
			else
			{
				printf("%d�������ꡣ",y);
			}
			
		}
		else
		{
			printf("%d�겻�����ꡣ",y);
			
		}	
	}
}


