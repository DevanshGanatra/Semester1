//Count number of even or odd number from an array of n numbers
#include<stdio.h>
void main()
{
   int n,i,even=0,odd=0;
   	printf("enter no. of elements you want: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter value of a[%d]",i);
		scanf("%d",&a[i]);	
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
    }
    printf("no. of even=%d\nno. of odd=%d",even,odd);
}
