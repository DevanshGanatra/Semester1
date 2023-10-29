// Read and store the roll no and marks of 20 students using 2D array
#include<stdio.h>
void main()
{
int roll[5][4],marks[5][4],i,j,n=1;
for(i=0;i<5;i++)
{
	for(j=0;j<4;j++)
	{  
		printf("enter of roll no.:");
		scanf("%d",&roll[i][j]);
		printf("enter marks:");
		scanf("%d",&marks[i][j]);
		
	}
}
printf("roll no.         marks  \n");
for(i=0;i<5;i++)
{
	for(j=0;j<4;j++)
	{  
		printf("%d  %d",roll[i][j],marks[i][j]);
	    printf("\n");
	}
}
}


