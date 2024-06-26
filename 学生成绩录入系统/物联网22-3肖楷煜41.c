#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STUDENT 60

void student_input();				    // 输入
void student_output(); 				    // 输出
void student_search_num();			    // 查学号
void student_search_name();			    // 查名字
void student_sort_num();			    // 学号排序 
void student_sort_sum();			    // 总分排序 
void student_modify_num();			    // 修改学号
void student_modify_name();			    // 修改名字 
void student_delete_num();			    // 删除学号 
void student_delete_name();			    // 删除名字
void student_exit();                    //退出程序 
  
 
int count=0;
int num[MAX_STUDENT];				    // 学号数组 
char name[MAX_STUDENT][50];			    // 名字数组 
int english[MAX_STUDENT];			    // 英语成绩存放组
int math[MAX_STUDENT];				    // 数学成绩存放组 
int clang[MAX_STUDENT];				    // c 语言成绩存放组 
int sum[MAX_STUDENT];				    // 总成绩存放组 
 
int main()
{
    int choose;
    while(1)
    {
        printf("\n              学生成绩管理系统        \n");
        printf("*****************************************************\n"); 
        printf("*   [1] 录入学生成绩信息      [2] 输出所有学生成绩  *\n");
        printf("*   [3] 按学号查找成绩        [4] 按姓名查找成绩    *\n"); 
        printf("*   [5] 按学号排序成绩        [6] 按总成绩排序成绩  *\n");
        printf("*   [7] 按学号修改成绩        [8] 按姓名修改成绩    *\n"); 
        printf("*   [9] 按学号删除成绩        [10] 按姓名删除成绩   *\n");
        printf("*   [0] 退出程序                                    *\n");
        printf("*****************************************************\n");
        printf("请输入（0-10）选择操作：");
        scanf("%d", &choose);

        switch(choose)
        {
            case 1: 
			student_input(); break;
            case 2:
			student_output(); break;
            case 3: 
			student_search_num(); break;
            case 4: 
			student_search_name(); break;
            case 5: 
			student_sort_num(); break;
            case 6: 
			student_sort_sum(); break;
            case 7: 
			student_modify_num(); break;
            case 8: 
			student_modify_name(); break;
            case 9: 
			student_delete_num(); break;
            case 10: 
			student_delete_name(); break;
            case 0:  
			student_exit(0);break;
            default: printf("请输入0-10的整数！\n"); break;
        } 
    }
    return 0;
}

void student_input()       //1    录入成绩  
{
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
}

void student_output()    //2     打印成绩 
{
    int i;
    printf("\n学生信息如下：\n");
    printf("-----------------------------------------------------------------------\n");
    printf("学号\t姓名\t数学成绩\t英语成绩\tC语言成绩\t总成绩\n");
    printf("-----------------------------------------------------------------------\n");
    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
    }
    printf("-----------------------------------------------------------------------\n");
}

void student_search_num()    //3     按学号查找成绩 
{
    int i, x;
    printf("请输入要查找的学生学号：");
    scanf("%d", &x);
    for(i = 0; i < count; i++)
    {
        if(num[i] == x)
        {
            printf("\n学号\t姓名\t数学\t英语\tC语言\t总分\n");
            printf("%d\t%s\t%d\t%d\t%d\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
            return;
        }
    }
    printf("该学号不存在！\n");
}

void student_search_name()       //4   按名字查找成绩 
{
    int i;
    char x[50];
    printf("请输入要查找的学生姓名：");
    scanf("%s", x);
    for(i = 0; i < count; i++)
    {
        if(strcmp(name[i], x) == 0)
        {
            printf("\n学号\t姓名\t数学\t英语\tC语言\t总分\n");
            printf("%d\t%s\t%d\t%d\t%d\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
            return;
        }
    }
    printf("该姓名不存在！\n");
}

void student_sort_num()         //5    按学号排序 
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

void student_sort_sum()       //6     按总分排序 
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

void student_modify_num()       //7   修改学号 
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
    }
    printf("该学号不存在！\n");
}

void student_modify_name()       //8    修改姓名 
{
    int i;
    char x[50];
    printf("请输入要修改信息的学生姓名：");
    scanf("%s", &x);
    for(i = 0; i < count; i++)
    {
        if(strcmp(name[i], x) == 0)                //名字数组与输入一致等于真 
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
    }
    printf("该姓名不存在！\n");
}

void student_delete_num()       //9   删除学号 
{
    int i, j, x;
    printf("请输入要删除信息的学生学号：");
    scanf("%d", &x);
    for(i = 0; i < count; i++)
    {
        if(num[i] == x)
        {
            for(j = i; j < count - 1; j++)
            {
                num[j] = num[j + 1];
                strcpy(name[j], name[j + 1]);
                math[j] = math[j + 1];
                english[j] = english[j + 1];
                clang[j] = clang[j + 1];
                sum[j] = sum[j + 1];
            }
            count--;
            printf("删除学生信息成功！\n");
            student_output();
            return;
        }
    }
    printf("该学号不存在！\n");	
}

void student_delete_name()      //10    删除姓名 
{
    int i, j;
    char x[50];
    printf("请输入要删除信息的学生姓名：");
    scanf("%s", &x);
    for(i = 0; i < count; i++)
    {
        if(strcmp(name[i], x) == 0)
        {
            for(j = i; j < count - 1; j++)
            {
                num[j] = num[j + 1];
                strcpy(name[j], name[j + 1]);
                math[j] = math[j + 1];
                english[j] = english[j + 1];
                clang[j] = clang[j + 1];
                sum[j] = sum[j + 1];
            }
            count--;
            printf("删除学生信息成功！\n");
            student_output();
            return;
        }
    }
    printf("该姓名不存在！\n");
}


void student_exit()    //0     退出程序 
{
    printf("再按一次退出，谢谢使用，再见！");
    exit(0);
}


