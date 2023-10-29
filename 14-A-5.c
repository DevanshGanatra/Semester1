// Read five person height and weight and count the number of person having 
//height greater than 170 and weight less than 50
#include<stdio.h>
void main()
{
	int h[5],w[5],i,count=0;
	for(i=0;i<5;i++)
	{
		printf(" enter height and weight of person %d",i+1);
		printf("\nheight: ");
		scanf("%d",&h[i]);
		printf("weight: ");
		scanf("%d",&w[i]);
	}
	for(i=0;i<5;i++)
	{
		if(h[i]>170 && w[i]<50)
		count++;
	}
	printf("number of person having height\n greater than 170 and weight less than 50 :%d",count);
	
	
}
