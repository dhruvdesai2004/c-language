//3.C program to reverse an array using pointers...

#include<stdio.h>
main()
{
	int n,i;
	printf("entere the size :");
	scanf("%d",&n);
	int a[n];
	int *ptr;
	ptr = &a;
	
	for(i=0;i<n;i++)
	{
		printf("Enter element :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("Reverse array is :\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*(ptr+i));	
	}
}
