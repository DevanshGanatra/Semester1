//Calculate the average, geometric and harmonic mean of n elements in an array. 
#include<stdio.h>
#include<math.h>
void main()
{
	int n,i;
	printf("no. of entries you want:");
	scanf("%d",&n);
	float a[n],ams=0,gms=1,hms=0;
	for(i=0;i<n;i++)
	{
		printf("enter value of a[%d]",i);
		scanf("%f",&a[i]);
		ams=ams+a[i];
		gms=gms*a[i];
		hms=hms+(1.0/a[i]);
	}
	float am=ams/n;
	float gm=pow(gms,1.0/n);
	float hm=pow(hms,-1);
	printf("AM=%f\nGM=%f\nHM=%f",am,gm,hm);
}
