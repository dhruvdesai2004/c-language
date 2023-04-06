#include<stdio.h>
main()
{
	FILE *p;
	int n;
	printf("Enter value of a :");
	scanf("%d",&n);
	
	p=fopen("dhruv.c","r");
	
	if(p==NULL)
	{
		printf("you can not open any file...");	
	}
	else 
	{
		printf("you can open this file...");
		fprintf(p,"the value of a : %d",n);
		fscanf(p,"the value of a : %d",&n);
				
	}	
}
