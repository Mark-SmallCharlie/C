#include<stdio.h>
#include<string.h>
int t(char a[],char b);
void main()
{
	char a[50],z;
	int c;
	printf("������:");
	gets(a);
	printf("Ҫͳ�Ƶ��ַ�Ϊ:");
	scanf("%c",&z);
	strlwr(a);
	c=t(a,z);
	printf("�ַ����ִ���: %d",c);
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


