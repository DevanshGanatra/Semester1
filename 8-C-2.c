// Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n. 
void main()
{
	int n,N,sum=0;
	printf("enter any integer : ");
	scanf("%d",&N);
	while(n<=N)
	{
		sum=sum+(n*n);
		n++;
	}
	printf("sum=%d",sum);
}
