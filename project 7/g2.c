//2. C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.

#include<stdio.h>

dmsum(int a[],int n)
{
int sum=0,i;
for(i=0;i<n;i++)
{
	sum=sum+a[i];
}
return sum;
	
}
main()
{
	int n,i;
	printf("enter the size :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the array element a[%d] :");
		scanf("%d",&a[i]);
	}
	printf("the sum of array :%d",dmsum(a,n));
}
