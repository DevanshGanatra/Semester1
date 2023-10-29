// Print value and address of a variable
#include<stdio.h>
void main()
{
	// method-1
	int *a,n;
	printf("enter integer:");
	scanf("%d",&n);
	a=&n;
	printf("%d\n",*a);
	printf("%d",a);
	// method-2
	int x;
	printf("\nenter integer:");
	scanf("%d",&x);
	int *b=&x;
	printf("%d\n",*b);
	printf("%d",b);
}
