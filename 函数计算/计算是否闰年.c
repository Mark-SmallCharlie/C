#include<stdio.h>
void main()
{
	int y;
	printf("请输入年份:");
	scanf("%d",&y);
	if (y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
			{
				printf("%d年是闰年。",y); 
			}
			else
			{
				printf("%d不是闰年。",y);
			}
			
		}
		else
		{
			printf("%d年不是闰年。",y);
			
		}	
	}
}


