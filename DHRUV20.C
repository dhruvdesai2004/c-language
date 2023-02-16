#include<stdio.h>
#include<conio.h>
main()
{
 int x,y,a;
 clrscr();
 printf("enter the value of x :");
 scanf("%d",&x);

 printf("enter the value of y :");
 scanf("%d",&y);

 a=(x+y)*(x+y)*3;
 printf("\n(x+y)*(x+y)*3%d",a);
 getch();
}