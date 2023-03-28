#include<stdio.h>
main()
{
int i,j,s,space=4;
for(i=1;i<=4;i++)
 {
 	for(s=1;s<=space;s++)
 	{	
 	 	printf(" ");
	}
	space--;
  for(j=1;j<=i;j++)
  {
  printf("%d",j);
  }
  printf("\n");
 }
 
 int Space=0;
 for(i=1;i<=5;i++)
 {
 	for(s=1;s<=Space;s++)
 	{	
 	 	printf(" ");
	}
	Space++;
  for(j=i;j<=5;j++)
  {
  printf("%d",j);
  }
  printf("\n");
 
}
 
}

