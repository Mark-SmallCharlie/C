#include<stdio.h> 
void student_output();

		
	void student_output()    //2     ��ӡ�ɼ� 
	{
	    int i;
	    printf("\nѧ��\t����\t��ѧ\tӢ��\tC����\t�ܷ�\n");
	    for(i = 0; i < count; i++)
	    {
	        printf("%d\t%d\t%d\t%d\t%d\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
	    }
	}
	
	void student_output()
{
    int i;
    printf("\nѧ����Ϣ���£�\n");
    printf("------------------------------------------------------\n");
    printf("ѧ��\t����\t��ѧ�ɼ�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\n");
    printf("------------------------------------------------------\n");
    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]);
    }
    printf("------------------------------------------------------\n");
}

