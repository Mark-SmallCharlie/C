 #include<stdio.h>
void int_arr_input(int a[],int n);        //�������� 
void int_arr_output(int a[],int n);
float int_arr_average(int a[],int n);
void main()                               //���ú��� 
{
 	int a[10],b[5];
 	float avga,avgb;
 	int_arr_input(a,10);
 	int_arr_output(a,10);
 	avga=int_arr_average(a,10);
 	printf("ƽ��ֵaΪ%f",avga);
 	
 	int_arr_input(b,5);
 	int_arr_output(b,5);
 	avgb=int_arr_average(b,5);
 	printf("ƽ��ֵbΪ%f",avgb);
 
 } 
 void int_arr_input(int a[],int n)
 {
  	int i;
  	printf("������%d��������",n);
  	for(i=0;i<n;i++)
  	{
  		 scanf("%d",&a[i]);
  	}
}
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
float int_arr_average(int a[],int n)
{
	int avga;
	avga+=a[10]/10;
	printf("ƽ��ֵΪ%d",avga);
	int avgb;
	avgb+=b[5]/10;
	printf("ƽ��ֵΪ%d",avgb); 
}
	


