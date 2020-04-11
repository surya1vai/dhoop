#include<stdio.h>
void main()
{
 int i,j, a[5],temp;
 printf("enter the five values:");
 for(i=0;i<5;i++)
   scanf("%d",&a[i]);                     //taking input values
 printf("the five values of a are:");
 for(i=0;i<5;i++)
    printf("\t%d",a[i]);                  // displaying the value before changing in ascending order
for(i=0;i<4;i++)
{

   for(j=i+1;j<5;j++)
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
 for(i=0;i<5;i++)
    printf("\t%d",a[i]);
printf("\nthe highest number is %d",a[4]);
printf("\nthe lowest number is %d",a[0]); 
}
