#include<stdio.h>
void main()
{
	int i,j, a[3][3],sum=0;
	printf("enter the elements of matrix:");
	for(i=0;i<3;i++)
	    for(j=0;j<3;j++)
	        scanf("%d",&a[i][j]);
printf("the elements of matrix a are:\n");
for(i=0;i<3;i++)
{
	    for(j=0;j<3;j++)
	       printf("\t%d",a[i][j]);
printf("\n");
}
for(i=0;i<3;i++)
   for(j=0;j<3;j++)
      if(i==j)
         sum+=a[i][j];
printf("the sum of diagonal element is %d:", sum);
}
