// Store n elements in an array and print the elements using pointer. 
#include<stdio.h>
void main(){
	int n;
	printf("enter no.of elements you want in array: ");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter element for a[%d]",i);
		scanf("%d",&a[i]);
	}
	int *x=a;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\t",i,*(x+i));
	}
}
