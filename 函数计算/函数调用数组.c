/*
 * ������ϰ��
 *		���һ�������������뺯�������������Ҫ����������������������������� 
 *		���һ�����������������������Ҫ�������������鳤�ȣ������������� 
 * 		���һ������ƽ��ֵ���㺯����ƽ��ֵͨ��������䷵��
 *		���������е��ô˺����������ƽ��ֵ 
 */
#include<stdio.h>
void int_arr_input(int a[],int n); // �������� 
void int_arr_output(int a[],int n); // �������� 
void main()
{
	int a[10],b[5];
	int_arr_input(a,10); // ���ú��� 
	int_arr_output(a,10); // ���ú��� 
	
	int_arr_input(b,5); // ���ú���
	int_arr_output(b,5); // ���ú��� 
}
// ���庯�� 
void int_arr_input(int a[],int n)
{
	int i;
	printf("������%d��������",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
// ���庯��
void int_arr_output(int a[],int n)
{
	int i;
	printf("���������ǣ�");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

