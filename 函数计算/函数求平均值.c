#include<stdio.h>
void main()
{
	while(1)
	{	
	float average(int a,int b,int c);		//��������
	float mianji(float avg); 
	int a,b,c;
	printf("������3�����֣�");
	scanf("%d%d%d",&a,&b,&c);
	float avg;
	avg = average(a,b,c);
	printf("ƽ��ֵ�ǣ�%f\n",avg);
	float s;
	s = mianji(avg);
	printf("Բ������ǣ�%f\n",s);
	}

}
 
//������ƽ���ĺ�����ƽ��ֵΪԲ�İ뾶�� 
float average(int a,int b,int c)
{
	float avg;
	avg=(a+b+c)/3.0;
	return avg;
} 
//������Բ����ĺ�����
float mianji(float avg)
{
	float s;
	s=(avg*3.1415926)*(avg*3.1415926);
	return s;
 } 

