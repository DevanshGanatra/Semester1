// Get a number as a string from user and convert string to integer,
// string to float as per user’s choice. 
#include<stdio.h>
void main()
{
	char a[100];
	printf("enter string: ");
	gets(a);
	int n;
	printf("enter '1' for converting into integer or '0'for converting into float. ");
	scanf("%d",&n);
      switch(n){
      	case 1:
		printf("%d",atoi(a));
          break;
        case 0:  
		printf("%s",a);
		  break;
        default:
		printf("invlid input");
    }
}
