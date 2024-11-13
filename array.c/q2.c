#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	
	printf("enter the size of array");
	scanf("%d",&n);
	
   int a[n];
   int i,sum;
   
   for(i=0;i<n;i++)
   {
   	 printf("enter a[%d]:");
   	 scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   	printf("%d",a[i]);
   }
   printf("\n");
   for(i=0;i<n;i++)
   {
   	sum=sum+a[i];
   }
     printf("the average is %d",sum/n);
	
}