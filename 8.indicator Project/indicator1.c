//1. C program to swap two numbers using pointers


#include <stdio.h>
 
main()
{
   int x, y, *a, *b, swap;
 
   printf("Enter the value of x and y :\n");
   scanf("%d%d", &x, &y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   a = &x;
   b = &y;
 
   swap = *b;
   *b = *a;
   *a = swap;
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
}
