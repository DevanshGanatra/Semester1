// Copy one array to another using pointers
#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements you want in array:");
	scanf("%d",&n);
	int a[n],i,b[n];
	for(i=0;i<n;i++)
	{
		printf("enter ineger for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int *ptr=a;
	for(i=0;i<n;i++)
	{
		b[i]=*(ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("b[%d]=%d\t",i,b[i]);
	}
}
