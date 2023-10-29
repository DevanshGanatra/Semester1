// Count number of elements divisible by 3 in array
#include<stdio.h>
void main()
{
	int n,i=0,ans=0;
	printf("enter no. of entries you want: ");
	scanf("%d",&n);
	int a[n];
	for(;i<n;i++)
	{
		printf("enter integer for a[%d]: ",i);
		scanf("%d",&a[i]);
		if(a[i]%3==0)
		ans++;
	}
	printf("total entries divisible by 3= %d",ans);
}
