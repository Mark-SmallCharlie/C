#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int count = 0;
int num[N];
char name[N][50];
int math[N];
int english[N];
int clang[N];
int sum[N];


void student_add();
void student_output(); 
void student_search_num();
void student_search_name();
void student_sort_num();
void student_sort_sum();
void student_fix_num();
void student_fix_name();
void student_delete_num();
void student_delete_name();


int main()
{
    int choose;
    while(1)
    { 
        printf("\n                    学生成绩管理系统                              \n");
        printf("****************************************************************\n"); 
        printf("*   [1] 录入学生成绩信息        [2] 输出所有学生成绩  *\n");
        printf("*   [3] 按学号查找              [4] 按姓名查找        *\n"); 
        printf("*   [5] 按学号排序              [6] 按总成绩排序      *\n");
        printf("*   [7] 按学号修改              [8] 按姓名修改        *\n"); 
        printf("*   [9] 按学号删除              [10] 按姓名删除       *\n");
        printf("*   [0] 退出程序                                      *\n");
        printf("****************************************************************\n");
        printf("请输入（0-10）选择操作：");
        scanf("%d", &choose);

        switch(choose)
        {
            case 1: student_add(); break;
            case 2: student_output(); break;
            case 3: student_search_num(); break;
            case 4: student_search_name(); break;
            case 5: student_sort_num(); break;
            case 6: student_sort_sum(); break;
            case 7: student_fix_num(); break;
            case 8: student_fix_name(); break;
            case 9: student_delete_num(); break;
            case 10:student_delete_name(); break;
            //case 0:  student_exit();break;
            default: printf("请输入0-10的整数！\n"); break;
        } 
    }
}

void student_add()
{
    if(count >= N)
    {
        printf("学生信息已满，无法添加新信息！\n");
        return;
    }

    int i, n;
    printf("请输入本次要录入学生信息的数量:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("学号:");
        scanf("%d", &num[count]);

        printf("姓名:");
        scanf("%s",&name[count]);

        printf("数学成绩:");
        scanf("%d",&math[count]);
		
		printf("英语成绩：");
		scanf("%d",&english[count]);
		
		printf("C语言成绩：");
		scanf("%d",&clang[count]);
		sum[count]=math[count]+english[count]+clang[count];
		count++;
	}
	student_output(); 
}

void student_output()
{
    int i;
    printf("\n学生信息如下：\n");
    printf("------------------------------------------------------------------\n");
    printf("学号\t姓名\t数学成绩\t英语成绩\tC语言成绩\t总成绩\n");
    printf("------------------------------------------------------------------\n");
    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
    }
    printf("------------------------------------------------------------------\n");
}


void student_search_num()
{
	int i,x;
	printf("请输入你要查找的学号：");
	scanf("%d",&x);
	for (i = 0;i<count;i++)
	{
		if (num[i] == x)
		{
			printf("学号\t姓名\t数学成绩\t英语成绩\tC语言成绩\t总成绩\n");
			printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
			
		}
	 } 
	printf("该学号不存在！ \n");
}

void student_search_name()
{
	int i ;
	char x[50];
	printf("请输入你要查找的名字：");
	scanf("%s",x);
	for(i = 0; i<count;i++)
	{
		if (strcmp(name[i], x) == 0)
		{
			printf("学号\t姓名\t数学成绩\t英语成绩\tC语言成绩\t总成绩\n");
			printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);	
		}
	}
	printf("你要查找的名字不存在！ \n");
}



void student_sort_num()
{
    int i, j, temp;
    char ch[50];
    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
                
                strcpy(ch, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], ch);
                
                temp = math[i];
                math[i] = math[j];
                math[j] = temp;
                
                temp = english[i];
                english[i] = english[j];
                english[j] = temp;
                
                temp = clang[i];
                clang[i] = clang[j];
                clang[j] = temp;
                
                temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }
    printf("按学号排序成功！\n");
    student_output();
}

void student_sort_sum()
{
    int i, j, temp;
    char ch[50];
    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(sum[i] < sum[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
                
                strcpy(ch, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], ch);
                
                temp = math[i];
                math[i] = math[j];
                math[j] = temp;
                
                temp = english[i];
                english[i] = english[j];
                english[j] = temp;
                
                temp = clang[i];
                clang[i] = clang[j];
                clang[j] = temp;
                
                temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }
    printf("按总成绩排序成功！\n");
    student_output();
}

void student_fix_num()
{
    int i, x;
    printf("请输入要修改信息的学生学号：");
    scanf("%d", &x);
    for(i = 0; i < count; i++)
    {
        if(num[i] == x)
        {
            printf("\n请输入要修改的学生成绩：\n");
            printf("数学成绩：");
            scanf("%d", &math[i]);
            printf("英语成绩：");
            scanf("%d", &english[i]);
            printf("C语言成绩：");
            scanf("%d", &clang[i]);
            sum[i] = math[i] + english[i] + clang[i];
            printf("修改学生成绩成功！\n");
            student_output();
            return;
        }
		printf("该姓名不存在！\n");
    } 
   
}

void student_fix_name()
{
	int i;
	char x[50];
	printf("\n请输入要修改的学生名字\n");
	scanf("%s",&x);
	for(i = 0; i < count; i++)
	{	
		if (strcmp(name[i],x) == 0)
		{
		printf("\n请输入要修改的学生成绩：\n");
        printf("数学成绩：");
        scanf("%d", &math[i]);
	    printf("英语成绩：");
        scanf("%d", &english[i]);
        printf("C语言成绩：");
        scanf("%d", &clang[i]);
        sum[i] = math[i] + english[i] + clang[i];
        printf("修改学生成绩成功！\n");
        student_output();
        return;
		}
		printf(" \n 你输入的名字不存在! \n");
	}
	
}


void student_delete_num()
{
	int i,j,x;
	printf("\n 请输入你要删除的学号 :\n");
	scanf("%d",&x);
	for (i = 0 ;i < count ;i++)
	{
		if (num[i] == x )
		{
			for (j = i; j < count -1; j++)
			{
				num[i]=num[j+1];
				strcpy(name[j],name[j+1]);
				math[j]=math[j+1];
				english[j]=english[j+1];
				clang[j]=clang[i+1];
			}
			count--;
			printf("\n 学号删除完成 \n");
			student_output();
			return;
		}
		printf(" /n 你输入的学号不存在  /n");
	}
}
void student_delete_name()
{
	int i,j;
	char x[50];
	printf("\n请输入你要删除的名字:\n");
	scanf("%s",&x);

	for (i = 0 ; i < count; i++) 
	{
		if (strcmp(name[i],x) == 0)
		{
			for(j = i;j < count -1;j++)
			{
				num[j] = num[j+1];
				strcpy(name[j], name[j+1]);
				math[j]=math[j+1];
				english[j]=english[j+1];
				clang[j]=clang[j+1];
								
			}
			count--;
			printf("\n 名字删除成功。\n");
			student_output();
			return;
		}
		printf("\n你要删除的名字不存在!\n");
	}

}
