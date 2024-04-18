#include<stdio.h>
#include<string.h>

#define MAX_STUDENT 60

int count=0; // ��¼��ѧ����Ϣ����

int num[MAX_STUDENT]; // ѧ�Ŵ洢����
char name[MAX_STUDENT][50]; // �����洢����
int math[MAX_STUDENT]; // ��ѧ�ɼ��洢����
int english[MAX_STUDENT]; // Ӣ��ɼ��洢����
int clang[MAX_STUDENT]; // C���Գɼ��洢����
int sum[MAX_STUDENT]; // �ܳɼ��洢����

void student_input();
void student_output();

void main()
{
	int choice;
	while(1)
	{
		printf("ѧ���ɼ�����ϵͳ\n");
		printf("*****************\n");
		printf("..............\n");
		printf("*****************\n");
		printf("�����루0-10��ѡ�������");
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
	printf("������¼��������");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("�������%dѧ������Ϣ��",i+1);
		printf("ѧ�ţ�");
		scanf("%d",&num[count]);
		printf("������");
		scanf("%s",name[count]);
		// ....
		sum[count]=math[count]+english[count]+clang[count];
		count++;
	}
}

void student_output()
{
	int i;
	printf("��%d��ѧϰ��Ϣ��",count);
	printf("ѧ�� ���� ��������");
	for(i=0;i<count;i++)
	{
		printf("%d %s %d %d %d %d",num[i],name[i],math[i],english[i],clang[i],sum[i]);
	}
}

void student_search_num()
{
	int i,m=-1,sno;
	printf("Ҫ���ҵ�ѧ�ţ�");
	scanf("%d",&sno);
	for(i=0;i<count;i++)
	{
		if(num[i]==sno)
		{
			m=i;
			break;
		}
	}
	// ���m==-1����δ�ҵ� 
	// ��������ҵ���ѧ����Ϣ���±�Ϊm��6����������� �� 
}

void student_search_name()
{
	int i,m=-1;
	char sname[50];
	printf("Ҫ���ҵ�������");
	scanf("%s",sname);
	for(i=0;i<count;i++)
	{
		if(strcmp(sname,name[i])==0)
		{
			m=i;
			break;
		}
	}
	// ���m==-1����δ�ҵ� 
	// ��������ҵ���ѧ����Ϣ���±�Ϊm��6����������� �� 
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
				
				// ������ѧ�ɼ����� 
				// ����Ӣ��ɼ����� 
				// ����C���Գɼ����� 
				// �����ܳɼ�����
				
				// ������������
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

