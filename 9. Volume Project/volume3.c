#include<stdio.h>

enum week{
	mon=1,tue,wed,thur,fri,sat,sun
};
main()
{
	enum week w;
	int day;
	day = mon;
	
	printf(" The day of week :%d",day);
	
}
