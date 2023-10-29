//Count number of positive or negative number from an array of n numbers
#include<stdio.h>
void main()
{
	int n,i=0,pos=0,neg=0;
	printf("enter no. of elements you want: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter value of a[%d]",i);
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			pos++;
		}
		else if(a[i]<0)
		{
			neg++;
		}
	}
	printf("no.of pos=%d\nno.of neg=%d",pos,neg);
		
	
}
