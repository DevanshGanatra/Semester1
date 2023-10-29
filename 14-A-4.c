// Find Max, Min, Sum, Avg. of given numbers from an array
#include<stdio.h>
void main()
{
  int n;
	printf("enter no. of integers you want: ");
	scanf("%d",&n);
	int arr[n],i,max,min,sum=0;
	float avg;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
	   if(max<arr[i])
	   {
	   	max=arr[i];
	   }
	   if(min>arr[i])
	   {
	   	min=arr[i];
	   }
	}
	avg=sum/n;
      printf(" max =%d\n min =%d\n sum =%d\n avg =%f ",max,min,sum,avg);
}
