#include<stdio.h>
void main()
{
	int r,n, sum=0,i=1;
	printf("enter the value of n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		sum=sum+r*i;
		n=n/2;
		i*=10;
	}
	printf("the binary number is %d",sum);
}
