//Perform Addition of two matrices
#include<stdio.h>
void main()
{
int r,c,x,y;
printf("enter no. of rows and columns you want for matrix 1: ");
scanf("%d %d",&r,&c);
printf("enter no. of rows and columns you want for matrix 2: ");
scanf("%d %d",&x,&y);
int a[r][c],b[x][y],i,j;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("enter integer for a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		printf("enter integer for b[%d][%d]",i,j);
		scanf("%d",&b[i][j]);
	}
}
if(r==x&&c==y)
{
	for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		a[i][j]=a[i][j]+b[i][j];
	}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d",a[i][j]);
	}
	printf("\n");
}
}
else
{
	printf("\naddition is not possible.");
}
}




