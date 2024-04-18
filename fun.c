#include <stdio.h>
#include <stdlib.h>
int fun(int *b)
{
 int k, a1, a2, i=0; 
	for(k=10; k<=55; k++)
	{
		a2=k/10; 
		a1=k-a2*10; 
		if((k%3==0 && a2==5) || (k%3==0 && a1==5))
		{
			b[i]=k; 
			i++; 
		}
	}
	return i; 

}
main()
{
	FILE *wf;
	int a[100], k, m; 
	m=fun(a); 
	printf("The result is%d/n"); 
	wf=fopen("out.dat","w");
	fprintf(wf, "%d\n", m);
	for(k=0; k<m; k++)
	{
		printf("%4d", a[k]); 
		fprintf(wf, "%d ", a[k]);
	}
	printf("\n"); 
	fclose(wf);
	system("pause");
}


