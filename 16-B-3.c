// Read a matrix and print diagonal elements and its sum
#include<stdio.h>
void main()
{
	int r,c;
	printf("enter no. of rows & columns you want: ");
	scanf("%d %d",&r,&c);
	if(r!=c)
	return printf("not possible");
	int a[r][c],i,j,sum=0;
	printf("enter elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			if(i==j)
			sum+=a[i][j];
		}
	}
	printf("\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
		    printf("%d",a[i][j]);
		    else
		    printf(" ");
		}
		printf("\n");
	}
	printf("sum of diagonal elements is:%d",sum);
	
}
