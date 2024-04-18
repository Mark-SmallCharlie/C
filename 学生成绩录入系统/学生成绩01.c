 #include <stdio.h>
 #include<string.h>
 #include <stdlib.h>
 #define MAX_STUDENT 60
 

 void student_intput();					//����1
 void student_output(); 				//���2
 void student_search_num();				//��ѧ��3
 void student_search_name();			//������4
 void student_sort_num();				//ѧ������5 
 void student_sort_sum();				//�ܷ����� 6
 void student_modify_num();				//�޸�ѧ��7
 void student_modify_name();			//�޸����� 8
 void student_delete_num();				//ɾ��ѧ�� 9
 void student_delete_name();			//ɾ������10
  
 
 int count=0;
 int num[MAX_STUDENT];					//ѧ������ 
 char name[MAX_STUDENT][50];			// �������� 
 int english[MAX_STUDENT];				// Ӣ��ɼ������
 int math[MAX_STUDENT];					//��ѧ�ɼ������ 
 int clang[MAX_STUDENT];				//c���Գɼ������ 
 int sum[MAX_STUDENT];					//�ܳɼ������ 
 
 void main ()
 {
 	int choose;
	while(1)
	{
		printf("\n");
		printf("\n");	
		printf("              ѧ���ɼ�����ϵͳ        ");
 		printf("\n");
		printf("\n");
		printf("***********************�˵�***********************"); 
		printf("\n");
		printf("*   [1]¼��ѧ���ɼ���Ϣ         [2]�������ѧ���ɼ�   *");
		printf("\n");
		printf("*   [3]��ѧ�Ų���               [4] ����������        *"); 
		printf("\n"); 
		printf("*   [5]��ѧ������               [6]���ܳɼ�����       *");
		printf("\n");
		printf("*   [7]��ѧ������               [8]�������޸�         *"); 
		pnintf("\n");
		printf("* [9]��ѧ��ɾ��                 [10]������ɾ��        *");
		printf(" \n");
		printf("*   [0]�˳�����    *");
		printf("***************************************************");
		printf("\n");
		printf("�����루0-10��ѡ�������");
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
	printf("�����뱾��Ҫ¼��ѧ����Ϣ������:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
		printf("ѧ��:");
		scanf("%d",&num);
		printf("����:");
		scanf("%s",&name);
		printf("��ѧ�ɼ�:");
		scanf("%d",&math);
		printf("Ӣ��ɼ�:");
		scanf("%d",&english);
		printf("C���Գɼ�:");
		scanf("%d",&clang);
		printf("\n");
		sum[count]=math[count]+english[count]+clang[count];
		count++;
		}
	}
 
 
 void student_output()       //2
 {
 	int i;
 	printf("\nѧ���ɼ��ֱ����£�  \n");
	printf("-----------------------------------------------\n"); 
 	printf("");
 	printf("-----------------------------------------------\n");
 	for (i = 0; i<count ; i++)
 	{
 		printf("\n ѧ��\t����\t��ѧ�ɼ�\tӢ��ɼ�\tC���Գɼ� \n");
 		printf("%d\t%s\t%d\t\t%d\t\t%d\n",num[count],name[count],math[count],english[count],clang[count]);
	}
	 printf("-----------------------------------------------\n");
 	} 
  
  
  void student_search_num()            //3
  {
  	int i,x;
  	printf("��������Ҫ���ҵ�ѧ�ţ�");
  	scanf("%d",&x);
  	for (i =0 ;i<count;i++)
  	{
		if( num[i]=x ) 
		{
			printf("\n ѧ��\t����\t��ѧ�ɼ�\tӢ��ɼ�\tC���Գɼ� \n");	
			printf("%d\t%s\t%d\t\t%d\t\t%d\n",num[count],name[count],math[count],english[count],clang[count]);
		} 		
	}
	printf("û�����ѧ�Ŵ��ڣ� \n");
  }
 	
 	

 void  student_search_name()          //4
 {
 	int i,x;
 	printf("��������Ҫ���ҵ�������");
 	scanf("%s",&x);
 	for (i = 0;i<count;i++)
 	{
 		if(strcmp(name[i] ,x) == 0)
		 {
		 	printf("\n ѧ��\t����\t��ѧ�ɼ�\tӢ��ɼ�\tC���Գɼ� \n");
		 	printf("%d\t%s\t%d\t\t%d\t\t%d\n",num[count],name[count],math[count],english[count],clang[count]);
		}	
	}
	printf("û��������ִ��ڣ� \n");
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
 
 
 
 
