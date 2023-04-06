#include<stdio.h>
main()
{
	FILE *p,*p1;
	int a;
	printf("Enter value of a :");
	scanf("%d",&a);
	
	p=fopen("E:\\dev=++\\dhruv5_1.c","w");
	p1=fopen("E:\\dev=++\\dhruv5_2.c","w");
	
	if(p==NULL && p1==NULL)
	{
		printf("you can not open any file...");	
	}
	else 
	{
		printf("you can open this file...");
		fprintf(p,"the value of a : %d",a);
		fscanf(p,"the value of a : %d",&a);
		fprintf(p1,"the value of a : %d",a);
			
	}	
}
