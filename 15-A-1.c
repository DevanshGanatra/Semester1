//Copy all elements of one array to another.
#include<stdio.h>
void main()
{
	int n,i=0,j=0;
	printf("enter no. of entries you want: ");
	scanf("%d",&n);
	int a[n],b[n];
	for(;i<n;i++)
	{
		printf("enter integer for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;j<n;j++)
	{
		b[j]=a[i];
		i++;
	}
	
}
