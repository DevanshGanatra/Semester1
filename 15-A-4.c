//Search element in array
#include<stdio.h>
void main()
{
	int n,x,i=0;
	printf("enter no. of entries you want: ");
	scanf("%d",&n);
	int a[n];
	for(;i<n;i++)
	{
		printf("enter integer for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("enter value you want to search in array:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("entered value is at index=%d",i);
			break;
		}
	}
	
}
