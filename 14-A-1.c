// Read n numbers from user and print in normal and reverse order. 
#include<stdio.h>
void main()
{
	int n;
	printf("enter no. of integers you want");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
