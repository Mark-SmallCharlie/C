#include <stdio.h>
#include <stdlib.h>
#include <wchar.h> // ����֧�ֿ��ַ��Ŀ⺯��

#define MAXSIZE 100

int num[MAXSIZE];
wchar_t name[MAXSIZE][20]; // ʹ�ÿ��ַ����͵��ַ���
int math[MAXSIZE];
int english[MAXSIZE];
int clang[MAXSIZE];
int sum[MAXSIZE];
int count = 0;

void student_input();
void student_output();
int compare(const void *a, const void *b); // �ȽϺ���

int main()
{
    while (1) {
        printf("����ѡ�1. ����ѧ���ɼ� 2. ���ѧ���ɼ� 0. �˳� 3. ���ܷ�����\n");
        int option;
        scanf("%d", &option);

        switch (option) {
            case 1:
                student_input();
                break;
            case 2:
                student_output();
                break;
            case 0:
                exit(0); // �˳�����
                break;
            case 3:
                qsort(sum, count, sizeof(int), compare); // ������ sum ��������
                // ע�⣬������޸����������˳��ᵼ����Ϣ��Ӧ����
                break;
            default:
                printf("ѡ���ȷ�����������룡\n");
                break;
        }
    }

    return 0;
}

void student_input()
{
    printf("����ѧ�ţ�");
    scanf("%d", &num[count]);

    printf("����������");
    scanf("%ls", name[count]); // ʹ����ȷ�ĸ�ʽ������ %ls ����ȡ���ַ����͵��ַ���

    printf("������ѧ�ɼ���");
    scanf("%d", &math[count]);

    printf("����Ӣ��ɼ���");
    scanf("%d", &english[count]);

    printf("����C���Գɼ���");
    scanf("%d", &clang[count]);

    sum[count] = math[count] + english[count] + clang[count];

    count++;
}

void student_output()
{
    int i;
    printf("\nѧ��\t����\t��ѧ\tӢ��\tC����\t�ܷ�\n");
    for(i = 0; i < count; i++)
    {
        printf("%d\t%ls\t%d\t%d\t%d\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]); // ʹ����ȷ�ĸ�ʽ������ %ls ����ӡ���ַ����͵��ַ���
    }
}

int compare(const void *a, const void *b)
{
    int va = *(int *)a; // ��ָ����ת�� int ��
    int vb = *(int *)b; // ��ָ����ת�� int ��
    return vb - va; // ͨ�������Ƚϴ�С
}
