#include<stdio.h>
void main()
{
	int n[10];
	printf("请输入10个数字：%n");
	scanf("%d",&n[10]);
	int i, j,temp;
	for (i=0;i<=9;i++);
	{
		for(j=0;j<=10-1-i;j++)
		{
			if (n[j]>n[j+1])
			{
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
		}
	}
	printf("排序完后数字：\n");
	for (i=0;i<10;i++)
	printf("%-4d",n[i]);
	printf("\n"); 
 } 
