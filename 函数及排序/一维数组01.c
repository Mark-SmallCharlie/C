#include<stdio.h>							//����10��100�ڵ��� 
void main()                                 //���10����ȥ�����������С 
{                                           //x = ƽ��ֵ 
	unsigned int a[10];                     //y =x**2+2*x+10
	int i, j,max,min,sum;                   //�ж�y�Ƿ����5000 
	float x,y;             
	printf("������10��100���ڵ�������");   
	for(i=0;i<=10;i++)                       //�ж��Ƿ��ӡ���� 
{
	scanf("%d",&a[i]);                       //���� 
}
	for (i=0;i<=10;i++)                     //�������С �ԴαȽ� 
printf("%4d",a[i]);                         //max=a[0];
	min=a[10];                              //min=a[0];
	for(i=1;i<=10;i++)                      //for(i=1;i<10;i++)	
if (min>a[i])                               
		min=a[i];
	printf("\n��СֵΪ%d\n",min);
	max=a[0];
	for(i=1;i<10;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
		if (min>a[i])
		{
			min=a[i];
		}
	}
		printf("���ֵΪ:%d\n",max);
	sum=0;
    for(i=0;i<10;i++)
    {
    	sum+=a[i];
	}
	sum-=max;
	sum-=min;
	x = sum/8;
	y = x*x+2*x+10;
	if(y<5000)
	{
		printf("X");
	}
	else
	{	
		printf("mingzi:charile") ;
	}
}
