#include<stdio.h>

int main()
{
	int i,j,result;
	for (i=9;i>=1;i--)
	{
	
		for (j=1;j<=9-1;j++)
		{
			printf("%d*%d=%-3d",i,j,result=i*j);
        }
      
		}
	return 0;
 } 

