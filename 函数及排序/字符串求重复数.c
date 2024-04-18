#include<stdio.h>
#include<string.h>
int t(char a[],char b);
void main()
{
	char a[50],z;
	int c;
	printf("请输入:");
	gets(a);
	printf("要统计的字符为:");
	scanf("%c",&z);
	strlwr(a);
	c=t(a,z);
	printf("字符出现次数: %d",c);
}
	int t(char a[],char b)
	{	
		int i,c=0,k;
		for(i=0;i<50;i++)
		{
			if(a[i]==b)
			{	
			k=c++;
			}
		}
	return(c);
}


