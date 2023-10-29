//Input a string in character array and print string and length of string. 
#include<stdio.h>
void main()
{
	char a[1000];
	printf("enter sring: ");
	gets(a);
	printf("%s\n",a);
	int i,count=0;
	for(i=0;a[i]!='\0';i++)
		{count++;}
		printf("string length= %d",count);
}
