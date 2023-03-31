//5. How to return multiple value from function...

#include <stdio.h>

function(int *a, int *b, char *c)
{
    *a = 10;
    *b = 20;
    *c = 'A';
}
 
main()
{
    int a, b;
    char c;
 
    function(&a, &b, &c);
    printf("a = %d, b = %d, c = %c", a, b, c);
 
}

