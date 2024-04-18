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
        printf("\n                    ѧ���ɼ�����ϵͳ                              \n");
        printf("****************************************************************\n"); 
        printf("*   [1] ¼��ѧ���ɼ���Ϣ        [2] �������ѧ���ɼ�  *\n");
        printf("*   [3] ��ѧ�Ų���              [4] ����������        *\n"); 
        printf("*   [5] ��ѧ������              [6] ���ܳɼ�����      *\n");
        printf("*   [7] ��ѧ���޸�              [8] �������޸�        *\n"); 
        printf("*   [9] ��ѧ��ɾ��              [10] ������ɾ��       *\n");
        printf("*   [0] �˳�����                                      *\n");
        printf("****************************************************************\n");
        printf("�����루0-10��ѡ�������");
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
            default: printf("������0-10��������\n"); break;
        } 
    }
}

void student_add()
{
    if(count >= N)
    {
        printf("ѧ����Ϣ�������޷��������Ϣ��\n");
        return;
    }

    int i, n;
    printf("�����뱾��Ҫ¼��ѧ����Ϣ������:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("ѧ��:");
        scanf("%d", &num[count]);

        printf("����:");
        scanf("%s",&name[count]);

        printf("��ѧ�ɼ�:");
        scanf("%d",&math[count]);
		
		printf("Ӣ��ɼ���");
		scanf("%d",&english[count]);
		
		printf("C���Գɼ���");
		scanf("%d",&clang[count]);
		sum[count]=math[count]+english[count]+clang[count];
		count++;
	}
	student_output(); 
}

void student_output()
{
    int i;
    printf("\nѧ����Ϣ���£�\n");
    printf("------------------------------------------------------------------\n");
    printf("ѧ��\t����\t��ѧ�ɼ�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\n");
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
	printf("��������Ҫ���ҵ�ѧ�ţ�");
	scanf("%d",&x);
	for (i = 0;i<count;i++)
	{
		if (num[i] == x)
		{
			printf("ѧ��\t����\t��ѧ�ɼ�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\n");
			printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
			
		}
	 } 
	printf("��ѧ�Ų����ڣ� \n");
}

void student_search_name()
{
	int i ;
	char x[50];
	printf("��������Ҫ���ҵ����֣�");
	scanf("%s",x);
	for(i = 0; i<count;i++)
	{
		if (strcmp(name[i], x) == 0)
		{
			printf("ѧ��\t����\t��ѧ�ɼ�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\n");
			printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);	
		}
	}
	printf("��Ҫ���ҵ����ֲ����ڣ� \n");
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
    printf("��ѧ������ɹ���\n");
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
    printf("���ܳɼ�����ɹ���\n");
    student_output();
}

void student_fix_num()
{
    int i, x;
    printf("������Ҫ�޸���Ϣ��ѧ��ѧ�ţ�");
    scanf("%d", &x);
    for(i = 0; i < count; i++)
    {
        if(num[i] == x)
        {
            printf("\n������Ҫ�޸ĵ�ѧ���ɼ���\n");
            printf("��ѧ�ɼ���");
            scanf("%d", &math[i]);
            printf("Ӣ��ɼ���");
            scanf("%d", &english[i]);
            printf("C���Գɼ���");
            scanf("%d", &clang[i]);
            sum[i] = math[i] + english[i] + clang[i];
            printf("�޸�ѧ���ɼ��ɹ���\n");
            student_output();
            return;
        }
		printf("�����������ڣ�\n");
    } 
   
}

void student_fix_name()
{
	int i;
	char x[50];
	printf("\n������Ҫ�޸ĵ�ѧ������\n");
	scanf("%s",&x);
	for(i = 0; i < count; i++)
	{	
		if (strcmp(name[i],x) == 0)
		{
		printf("\n������Ҫ�޸ĵ�ѧ���ɼ���\n");
        printf("��ѧ�ɼ���");
        scanf("%d", &math[i]);
	    printf("Ӣ��ɼ���");
        scanf("%d", &english[i]);
        printf("C���Գɼ���");
        scanf("%d", &clang[i]);
        sum[i] = math[i] + english[i] + clang[i];
        printf("�޸�ѧ���ɼ��ɹ���\n");
        student_output();
        return;
		}
		printf(" \n ����������ֲ�����! \n");
	}
	
}


void student_delete_num()
{
	int i,j,x;
	printf("\n ��������Ҫɾ����ѧ�� :\n");
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
			printf("\n ѧ��ɾ����� \n");
			student_output();
			return;
		}
		printf(" /n �������ѧ�Ų�����  /n");
	}
}
void student_delete_name()
{
	int i,j;
	char x[50];
	printf("\n��������Ҫɾ��������:\n");
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
			printf("\n ����ɾ���ɹ���\n");
			student_output();
			return;
		}
		printf("\n��Ҫɾ�������ֲ�����!\n");
	}

}
