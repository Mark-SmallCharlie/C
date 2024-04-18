 #include<stdio.h>
void int_arr_input(int a[],int n);        //声明函数 
void int_arr_output(int a[],int n);
float int_arr_average(int a[],int n);
void main()                               //调用函数 
{
 	int a[10],b[5];
 	float avga,avgb;
 	int_arr_input(a,10);
 	int_arr_output(a,10);
 	avga=int_arr_average(a,10);
 	printf("平均值a为%f",avga);
 	
 	int_arr_input(b,5);
 	int_arr_output(b,5);
 	avgb=int_arr_average(b,5);
 	printf("平均值b为%f",avgb);
 
 } 
 void int_arr_input(int a[],int n)
 {
  	int i;
  	printf("请输入%d个整数：",n);
  	for(i=0;i<n;i++)
  	{
  		 scanf("%d",&a[i]);
  	}
}
void int_arr_output(int a[],int n)
{
	int i;
	printf("数组内容是：");
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
	printf("平均值为%d",avga);
	int avgb;
	avgb+=b[5]/10;
	printf("平均值为%d",avgb); 
}
	


