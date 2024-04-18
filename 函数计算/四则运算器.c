#include<stdio.h>
void main()
{
	float a,b;
	char op;
	while(1)
	{
		printf("«Î ‰»Î‘À ‰ Ω£∫");
		scanf("%f%c%f",&a,&op,&b);
		switch(op)
		{
			case '+':
				printf("%0.1f+%0.1f=%0.1f\n",a,b,a+b);
			break;
			case '-':
				printf("%0.1f-%0.1f=%0.1f\n",a,b,a-b);
			break;
			case '*':
				printf("%0.1f*%0.1f=%0.1f\n",a,b,a*b);
			break;
			case '/':
				printf("%0.1f/%0.1f=%0.1f\n",a,b,a/b);
			break;
			default:
				printf("error!\n"); 
		}
	}
 } 
