//Find the sum and average of different numbers which are 
//accepted by user as many as user wants
#include<stdio.h>
void main()
{
	int x,n,i=1,sum=0;
	float avg=0;
	printf("no. of digits you want to ener: ");
	scanf("%d",&x);
	while(i<=x){
		printf("enter any digit: ");
		scanf("%d",&n);
		sum=sum+n;
		avg=sum/i;
		i++;
	}
	printf("sum=%d",sum);
	printf("avg=%.2f",avg);
}
