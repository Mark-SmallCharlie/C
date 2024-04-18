#include<stdio.h>
main()
{
	int i;
	for (i=1;i<=10000;i++)
	{
	if (i%10==7||i%7==0||i/10==7)
	printf("¹ý\n");
	else 
	printf("%d\n",i); 
	}
 } 
