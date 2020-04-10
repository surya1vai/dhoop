#include<stdio.h>
#include<math.h>
void main()
{
	int n, sum=0, p=0,r;
	printf("enter the value of n\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(2,p)*r;
		n=n/10;
		p++;
	}
	printf("the equivalent decimal number is %d",sum);
}
