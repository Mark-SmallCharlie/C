#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STUDENT 60

void student_input();				    // ����
void student_output(); 				    // ���
void student_search_num();			    // ��ѧ��
void student_search_name();			    // ������
void student_sort_num();			    // ѧ������ 
void student_sort_sum();			    // �ܷ����� 
void student_modify_num();			    // �޸�ѧ��
void student_modify_name();			    // �޸����� 
void student_delete_num();			    // ɾ��ѧ�� 
void student_delete_name();			    // ɾ������
void student_exit();                    //�˳����� 
  
 
int count=0;
int num[MAX_STUDENT];				    // ѧ������ 
char name[MAX_STUDENT][50];			    // �������� 
int english[MAX_STUDENT];			    // Ӣ��ɼ������
int math[MAX_STUDENT];				    // ��ѧ�ɼ������ 
int clang[MAX_STUDENT];				    // c ���Գɼ������ 
int sum[MAX_STUDENT];				    // �ܳɼ������ 
 
int main()
{
    int choose;
    while(1)
    {
        printf("\n              ѧ���ɼ�����ϵͳ        \n");
        printf("*****************************************************\n"); 
        printf("*   [1] ¼��ѧ���ɼ���Ϣ      [2] �������ѧ���ɼ�  *\n");
        printf("*   [3] ��ѧ�Ų��ҳɼ�        [4] ���������ҳɼ�    *\n"); 
        printf("*   [5] ��ѧ������ɼ�        [6] ���ܳɼ�����ɼ�  *\n");
        printf("*   [7] ��ѧ���޸ĳɼ�        [8] �������޸ĳɼ�    *\n"); 
        printf("*   [9] ��ѧ��ɾ���ɼ�        [10] ������ɾ���ɼ�   *\n");
        printf("*   [0] �˳�����                                    *\n");
        printf("*****************************************************\n");
        printf("�����루0-10��ѡ�������");
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
            default: printf("������0-10��������\n"); break;
        } 
    }
    return 0;
}

void student_input()       //1    ¼��ɼ�  
{
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
}

void student_output()    //2     ��ӡ�ɼ� 
{
    int i;
    printf("\nѧ����Ϣ���£�\n");
    printf("-----------------------------------------------------------------------\n");
    printf("ѧ��\t����\t��ѧ�ɼ�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\n");
    printf("-----------------------------------------------------------------------\n");
    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
    }
    printf("-----------------------------------------------------------------------\n");
}

void student_search_num()    //3     ��ѧ�Ų��ҳɼ� 
{
    int i, x;
    printf("������Ҫ���ҵ�ѧ��ѧ�ţ�");
    scanf("%d", &x);
    for(i = 0; i < count; i++)
    {
        if(num[i] == x)
        {
            printf("\nѧ��\t����\t��ѧ\tӢ��\tC����\t�ܷ�\n");
            printf("%d\t%s\t%d\t%d\t%d\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
            return;
        }
    }
    printf("��ѧ�Ų����ڣ�\n");
}

void student_search_name()       //4   �����ֲ��ҳɼ� 
{
    int i;
    char x[50];
    printf("������Ҫ���ҵ�ѧ��������");
    scanf("%s", x);
    for(i = 0; i < count; i++)
    {
        if(strcmp(name[i], x) == 0)
        {
            printf("\nѧ��\t����\t��ѧ\tӢ��\tC����\t�ܷ�\n");
            printf("%d\t%s\t%d\t%d\t%d\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
            return;
        }
    }
    printf("�����������ڣ�\n");
}

void student_sort_num()         //5    ��ѧ������ 
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

void student_sort_sum()       //6     ���ܷ����� 
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

void student_modify_num()       //7   �޸�ѧ�� 
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
    }
    printf("��ѧ�Ų����ڣ�\n");
}

void student_modify_name()       //8    �޸����� 
{
    int i;
    char x[50];
    printf("������Ҫ�޸���Ϣ��ѧ��������");
    scanf("%s", &x);
    for(i = 0; i < count; i++)
    {
        if(strcmp(name[i], x) == 0)                //��������������һ�µ����� 
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
    }
    printf("�����������ڣ�\n");
}

void student_delete_num()       //9   ɾ��ѧ�� 
{
    int i, j, x;
    printf("������Ҫɾ����Ϣ��ѧ��ѧ�ţ�");
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
            printf("ɾ��ѧ����Ϣ�ɹ���\n");
            student_output();
            return;
        }
    }
    printf("��ѧ�Ų����ڣ�\n");	
}

void student_delete_name()      //10    ɾ������ 
{
    int i, j;
    char x[50];
    printf("������Ҫɾ����Ϣ��ѧ��������");
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
            printf("ɾ��ѧ����Ϣ�ɹ���\n");
            student_output();
            return;
        }
    }
    printf("�����������ڣ�\n");
}


void student_exit()    //0     �˳����� 
{
    printf("�ٰ�һ���˳���ллʹ�ã��ټ���");
    exit(0);
}


