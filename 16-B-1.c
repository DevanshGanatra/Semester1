// Print Transpose of a matrix
#include<stdio.h>
void main()
{
int r,c;
printf("enter no. of rows and columns you want: ");
scanf("%d %d",&r,&c);
int a[r][c],b[c][r],i,j;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("enter integer for a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
}
for(j=0;j<c;j++)
{
	for(i=0;i<r;i++)
	{
		printf("%d",a[i][j]);
		
	}
	printf("\n");
}
}


