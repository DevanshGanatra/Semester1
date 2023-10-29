//Count numbers higher than the average of an array. 
#include <stdio.h>
void main() {
    int n,i=0,sum=0,count=0;
    printf("enter no. of values:");
    scanf("%d",&n);
    int a[n];
   for(;i<n;i++)
    {
       printf("enter value of a[%d]",i);
       scanf ("%d",&a[i]);
       sum=sum+a[i];
    }
    float avg=sum/n;
   for(i=0;i<n;i++)
    {
       if(a[i]>avg)
       count++;
    }
    printf("%d",count);
}
