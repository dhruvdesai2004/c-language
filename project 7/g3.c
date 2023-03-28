//3. C program to find Length of the String by passing String/ Character Array as an Argument using User Define Functions.

#include<stdio.h>

sum(char d[])
{
	int m;
	printf("Enter the string : ");
	gets(d);
	m=strlen(d);
	return m;
}
main()
{
	int m;
	char d[50];
	m=sum(d);
	printf("The length of string is : %d",m);
}
