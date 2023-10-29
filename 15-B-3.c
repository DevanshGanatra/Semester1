//Swap first element with last, second to second last and so on
#include<stdio.h>
void main()
{
	int n;
	printf("enter no. of entries you want:");
	scanf("%d",&n);
	int a[n],i,temp;
	for(i=0;i<n;i++)
	{
		printf("enter integer for a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	printf("new array: ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
