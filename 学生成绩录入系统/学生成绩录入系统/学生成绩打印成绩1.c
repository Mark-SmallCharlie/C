#include<stdio.h> 
void student_output();

		
	void student_output()    //2     打印成绩 
	{
	    int i;
	    printf("\n学号\t姓名\t数学\t英语\tC语言\t总分\n");
	    for(i = 0; i < count; i++)
	    {
	        printf("%d\t%d\t%d\t%d\t%d\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
	    }
	}
	
	void student_output()
{
    int i;
    printf("\n学生信息如下：\n");
    printf("------------------------------------------------------\n");
    printf("学号\t姓名\t数学成绩\t英语成绩\tC语言成绩\t总成绩\n");
    printf("------------------------------------------------------\n");
    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
    }
    printf("------------------------------------------------------\n");
}

