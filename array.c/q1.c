#include<stdio.h>


void main()
{
	int n;
	
	printf("enter size of array:");
	scanf("%d",&n);
	
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("length is %d",n);
	    
}