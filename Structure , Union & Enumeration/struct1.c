#include<stdio.h>

struct stud{
	char name[10],cou[10],city[10],scl[10];
	int id,age,std;
};
main()
{
	struct stud s;
	int i,n;
	printf("enter the number of student :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter name of stud :");
	scanf("%s",&s.name);
	
		printf("enter name of cou :");
	scanf("%s",&s.cou);
	
		printf("enter name of city :");
	scanf("%s",&s.city);
	
		printf("enter name of school :");
	scanf("%s",&s.scl);
	
		printf("enter id number :");
	scanf("%d",&s.id);
	
		printf("enter the age :");
	scanf("%d",&s.age);
	
		printf("enter the standed :");
	scanf("%d",&s.std);
	
	printf("====================================\n");
	
	printf("enter name of stud :%s\n",s.name);
		printf("enter name of cou :%s\n",s.cou);
		printf("enter name of city :%s\n",s.city);
		printf("enter name of school :%s\n",s.scl);
		printf("enter id number :%d\n",s.id);
		printf("enter the age :%d\n",s.age);
		printf("enter the standed :%d\n",s.std);
		
	printf("************************************\n");	
    }
		
}
