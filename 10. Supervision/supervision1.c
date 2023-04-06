#include<stdio.h>
main()
{
	FILE *p;
	p=fopen("dhruv1.c","w");
	int n;
	printf("enter the a :");
	scanf("%d",&n);
	
	if(p==NULL)
	{
		printf("You can not open any file");
	}
	else
	{
		printf("you can open any file");
		
		fprintf(p,"%d",n);
	}
}
