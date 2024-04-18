 #include <stdio.h>
 #include<string.h>
 #include <stdlib.h>
 #define MAX_STUDENT 60
 

 void student_intput();					//输入1
 void student_output(); 				//输出2
 void student_search_num();				//查学号3
 void student_search_name();			//查名字4
 void student_sort_num();				//学号排序5 
 void student_sort_sum();				//总分排序 6
 void student_modify_num();				//修改学号7
 void student_modify_name();			//修改名字 8
 void student_delete_num();				//删除学号 9
 void student_delete_name();			//删除名字10
  
 
 int count=0;
 int num[MAX_STUDENT];					//学号数组 
 char name[MAX_STUDENT][50];			// 名字数组 
 int english[MAX_STUDENT];				// 英语成绩存放组
 int math[MAX_STUDENT];					//数学成绩存放组 
 int clang[MAX_STUDENT];				//c语言成绩存放组 
 int sum[MAX_STUDENT];					//总成绩存放组 
 
 void main ()
 {
 	int choose;
	while(1)
	{
		printf("\n");
		printf("\n");	
		printf("              学生成绩管理系统        ");
 		printf("\n");
		printf("\n");
		printf("***********************菜单***********************"); 
		printf("\n");
		printf("*   [1]录入学生成绩信息         [2]输出所有学生成绩   *");
		printf("\n");
		printf("*   [3]按学号查找               [4] 按姓名查找        *"); 
		printf("\n"); 
		printf("*   [5]按学号排序               [6]按总成绩排序       *");
		printf("\n");
		printf("*   [7]按学号修收               [8]按姓名修改         *"); 
		pnintf("\n");
		printf("* [9]按学号删除                 [10]按姓名删除        *");
		printf(" \n");
		printf("*   [0]退出程序    *");
		printf("***************************************************");
		printf("\n");
		printf("请输入（0-10）选择操作：");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1: student_input(); break;
			case 2: student_output(); break;
			case 3: student_search_num(); break;
			case 0: return;
		 } 
	}
}


void student_intput()            //1
	{
  	int i,n;
	printf("请输入本次要录入学生信息的数量:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
		printf("学号:");
		scanf("%d",&num);
		printf("姓名:");
		scanf("%s",&name);
		printf("数学成绩:");
		scanf("%d",&math);
		printf("英语成绩:");
		scanf("%d",&english);
		printf("C语言成绩:");
		scanf("%d",&clang);
		printf("\n");
		sum[count]=math[count]+english[count]+clang[count];
		count++;
		}
	}
 
 
 void student_output()       //2
 {
 	int i;
 	printf("\n学生成绩分别如下：  \n");
	printf("-----------------------------------------------\n"); 
 	printf("");
 	printf("-----------------------------------------------\n");
 	for (i = 0; i<count ; i++)
 	{
 		printf("\n 学号\t姓名\t数学成绩\t英语成绩\tC语言成绩 \n");
 		printf("%d\t%s\t%d\t\t%d\t\t%d\n",num[count],name[count],math[count],english[count],clang[count]);
	}
	 printf("-----------------------------------------------\n");
 	} 
  
  
  void student_search_num()            //3
  {
  	int i,x;
  	printf("请输入你要查找的学号：");
  	scanf("%d",&x);
  	for (i =0 ;i<count;i++)
  	{
		if( num[i]=x ) 
		{
			printf("\n 学号\t姓名\t数学成绩\t英语成绩\tC语言成绩 \n");	
			printf("%d\t%s\t%d\t\t%d\t\t%d\n",num[count],name[count],math[count],english[count],clang[count]);
		} 		
	}
	printf("没有这个学号存在！ \n");
  }
 	
 	

 void  student_search_name()          //4
 {
 	int i,x;
 	printf("请输入你要查找的姓名：");
 	scanf("%s",&x);
 	for (i = 0;i<count;i++)
 	{
 		if(strcmp(name[i] ,x) == 0)
		 {
		 	printf("\n 学号\t姓名\t数学成绩\t英语成绩\tC语言成绩 \n");
		 	printf("%d\t%s\t%d\t\t%d\t\t%d\n",num[count],name[count],math[count],english[count],clang[count]);
		}	
	}
	printf("没有这个名字存在！ \n");
  } 
 
 
 void student_srot_num()            //5
 {
 	int i ,j,temp;
 	char ch[50];
 	for(i =0 ,i<count ,i++)
	{
		for(j = i+1; j < count; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
				
				strcpy(ch,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],ch);
				
				temp = math[i];
				math[i] = math[j];
				math[j] = temp;
				
				
				temp = english[i];
				english[i] = english[j];
				english[j] = temp;
				
				temp = clang[i];
				clang[i] = clang [j];
				clang[j] = temp;
				}	
				
	    	} 	
		}
	student_output();
	return;
		
 }
 
 void student_srot_name()            //6
 {
 	
 }
 
 

 void  student_modify_num()        //7
 {
 	
 }
 
  void student_modify_name()       //8
  {
  	
  	
  	
  }
  
  void student_delete_num()         //9
 {
 	
 }
 
 
 void student_delete_name()        //10
 {
 	
 	
 }
 
 
 
 
