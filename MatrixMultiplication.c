#include<stdio.h>
void main()
{
	int i,j, a[3][3],b[3][3],c[3][3],k;
	printf("\nenter the first matrix:");
	for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	      scanf("%d",&a[i][j]);
	printf("enter the second matrix:");
	for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	      scanf("%d",&b[i][j]);
	
	printf("\nenter the first matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
	      printf("\t%d",a[i][j]);
 	printf("\n");
	}
	   
	printf("enter the second matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	      printf("\t%d",b[i][j]);
	printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			 c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
	printf("\n the product of two matrix is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
	      printf("\t%d",c[i][j]);
 	printf("\n");
 }
		  }
		  
