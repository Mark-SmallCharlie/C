/*
 * ������ϰ��
 *	����3��ȫ�ֱ����� 
 *	����3���޷���ֵ��������3����ʽ������
 *		�ֱ����ڼ���3��������ƽ��ֵ�����ֵ����Сֵ�����������ȫ�ֱ����У�
 *	��������������3��������������3��������Ȼ�����3��ȫ�ֱ�����ֵ�� 
 */
#include<stdio.h>

float a,b,c;
int x,y,z;

void main()
{
	while(1)
	{
	void average(float i,float j,float k);
	void max(float i,float j,float k);
	void min(float i,float j,float k);
	
	float i,j,k;
	printf("������3������");
	scanf("%f%f%f",&i,&j,&k);
	average(i,j,k);
	max(i,j,k);
	min(i,j,k);
	printf("ƽ��ֵ��%f\n���ֵ��%f\n��Сֵ��%f\n",a,b,c);
	}
}

void average(float i,float j,float k)                //��ƽ��ֵ�� 
{
	float avg;
	avg=(i+j+k)/3;                     
	a=avg;
}

void max(float i,float j,float k)					//���ֵ 
{
	if(i>j&&i>k)
	{
		b=i;
	}
	else if(j>i&&j>k)
	{
		b=j;
	}
	else
	{
		b=k;
	}
}

void min(float i,float j,float k)                   //��Сֵ 
{
	if(i<j&&i<k)
	{
		c=i;
	}
	else if(j<i&&j<k)
	{
		c=j;
	}
	else
	{
		c=k;
	}
}

	// ���� 
	/*
void paix(float i;float j;float k) 
{
	for(x=0;x<10-1;x++)
	{
		for(y=0;y<10-1-i;y++)
		{
			if(score[j]<score[j+1])             //���δӴ�С���� 
			{
				t=score[j];
				score[j]=score[j+1];	
				score[j+1]=t;
			}
		}
	}
	// ���������
	printf("��������");
	for(x=0;x<10;x++)
	{
		printf("%.2f ",score[i]);
	}
	printf("\n");
	*/
