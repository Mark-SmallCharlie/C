#include<stdio.h>

float a,b,c;
void main()

{	
	void average(float i,float j,float k);		//��������
	void max(float i,float j,float k);
	void max(float i,float j,float k);

	float i,j,k; 
	printf("������3�����֣�");
	scanf("%f%f%f",&i,&j,&k);
	average(i,j,k);
	max;
	min;
	printf("ƽ��ֵ�ǣ�%f\n ���ֵΪ��%f\n ��СֵΪ:%f\n",a,b,c);	

} 
 void average(float i,float j,float k)
{
	float avg;
	avg=(a+b+c)/3.0;
	a = avg;
} 
void  max(float i,float j,float k)  
{
	if (i>k&&i>j)
	{
		b=i;		
	}
	else if(j>i&&j>k);
	{
		b=j;
	}
	else
	{
		b=k;
	}
}
void  min(float i,float j,float k)  
{
	if (i>k&&j>k)
	{
		b=k;		
	}
	else if(j>i&&k>i);
	{
		b=i;
	}
	else
	{
		b=j;
	}
}
