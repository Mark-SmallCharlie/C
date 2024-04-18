#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		if (i==4)
			continue;
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-5d",i,j,j*i);
			
		}
		
		printf("\n");
	}
}
