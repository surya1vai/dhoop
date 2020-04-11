#include<stdio.h>
void main()
{
 int i,j,n, a[20],temp;
 printf("enter the size of array\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);                     //taking input values
 printf("the five values of a are:");
 for(i=0;i<5;i++)
    printf("\t%d",a[i]);                  // displaying the value before changing in ascending order
for(i=0;i<n-1;i++)
{

   for(j=i+1;j<n;j++)
   {
      if(a[i]>a[j])
      {                                       //the main logic part 
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
}
printf("\nthe element in ascending order is:\n");
 for(i=0;i<n;i++)
    printf("\t%d",a[i]);
printf("\nthe highest number is %d",a[n-1]);
printf("\nthe lowest number is %d",a[0]); 
}
