/*      5
       45
      345
     2345
    12345 */
#include<stdio.h>
main()
{
int i,j,s,space=4;
for(i=5;i>=1;i--)
 {
 	for(s=1;s<=space;s++)
 	{	
 	 	printf(" ");
	}
	space--;
  for(j=i;j<=5;j++)
  {
  printf("%d",j);
  }
  printf("\n");
 }
}
