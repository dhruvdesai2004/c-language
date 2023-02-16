#include<stdio.h>
#include<conio.h>
main()
{
 int x,y,z,a;
 clrscr();
 printf("enter the value of x :");
 scanf("%d",&x);

 printf("enter the value of y :");
 scanf("%d",&y);

 printf("enter the value of z :");
 scanf("%d",&z);

 a=(x+y+z)*(x+y+z);
 printf("\n(x+y+z)*(x*y*z)%d",a);
 getch();
}