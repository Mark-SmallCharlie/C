#include<stdio.h>
#include<string.h>

#define MAX_STUDENT 60

int count=0; // 已录入学生信息数量

int num[MAX_STUDENT]; // 学号存储数组
char name[MAX_STUDENT][50]; // 姓名存储数组
int math[MAX_STUDENT]; // 数学成绩存储数组
int english[MAX_STUDENT]; // 英语成绩存储数组
int clang[MAX_STUDENT]; // C语言成绩存储数组
int sum[MAX_STUDENT]; // 总成绩存储数组

void student_input();
void student_output();

void main()
{
	int choice;
	while(1)
	{
		printf("学生成绩管理系统\n");
		printf("*****************\n");
		printf("..............\n");
		printf("*****************\n");
		printf("请输入（0-10）选择操作：");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				student_input();
				break;
			case 2:
				student_output();
				break;
			
			
			case 0:
				return;
		}
	}
}

void student_input()
{
	int i,n;
	printf("请输入录入数量：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("请输入第%d学生的信息：",i+1);
		printf("学号：");
		scanf("%d",&num[count]);
		printf("姓名：");
		scanf("%s",name[count]);
		// ....
		sum[count]=math[count]+english[count]+clang[count];
		count++;
	}
}

void student_output()
{
	int i;
	printf("有%d个学习信息。",count);
	printf("学号 姓名 。。。。");
	for(i=0;i<count;i++)
	{
		printf("%d %s %d %d %d %d",num[i],name[i],math[i],english[i],clang[i],sum[i]);
	}
}

void student_search_num()
{
	int i,m=-1,sno;
	printf("要查找的学号：");
	scanf("%d",&sno);
	for(i=0;i<count;i++)
	{
		if(num[i]==sno)
		{
			m=i;
			break;
		}
	}
	// 如果m==-1，则未找到 
	// 否则输出找到的学生信息（下标为m的6个数组的内容 ） 
}

void student_search_name()
{
	int i,m=-1;
	char sname[50];
	printf("要查找的姓名：");
	scanf("%s",sname);
	for(i=0;i<count;i++)
	{
		if(strcmp(sname,name[i])==0)
		{
			m=i;
			break;
		}
	}
	// 如果m==-1，则未找到 
	// 否则输出找到的学生信息（下标为m的6个数组的内容 ） 
}

void student_sort_num()
{
	int i,j,t,m;
	char c;
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
				
				// 交换数学成绩数组 
				// 交换英语成绩数组 
				// 交换C语言成绩数组 
				// 交换总成绩数组
				
				// 交换姓名数组
				for(m=0;m<50;m++)
				{
					c=name[j][m];
					name[j][m]=name[j+1][m];
					name[j+1][m]=c;
				}
			}
		}
	}
}

