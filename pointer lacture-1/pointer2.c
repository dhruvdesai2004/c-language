#include<stdio.h>
main()
{
	int m,n;
	printf("Enter the value of m : ");
	scanf("%d",&m);
	printf("Enter the value of n : ");
	scanf("%d",&n);
   
    int *ptr1,*ptr2;
	
	ptr1=&m;
	ptr2=&n;
	
	printf("----The swap of two variable ----\n");
	m=m-n;
	n=m+n;
	m=n-m;
	printf("After swapping Value of m is %d\n",*ptr1);
	printf("After swapping Value of n is %d",*ptr2);
}

