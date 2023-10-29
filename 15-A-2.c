// Count total number of negative elements in array
#include<stdio.h>
void main()
{
	int n,i=0,neg=0;
	printf("enter no. of entries you want: ");
	scanf("%d",&n);
	int a[n];
	for(;i<n;i++)
	{
		printf("enter integer for a[%d]: ",i);
		scanf("%d",&a[i]);
		if(a[i]<0)
		neg++;
	}
	printf("total negative no.= %d",neg);
}
