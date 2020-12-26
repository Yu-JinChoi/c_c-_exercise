#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct date {
	int year;
	int month;
	int day;
	char date_1 [10];
};

int main()
{
	struct date p;
	
	p.year=1997;
	p.month=12;
	p.day=19;
	
	strcpy(p.date_1 ,"¿ù¿äÀÏ");
	
	printf("%d %d %d %s", p.year, p.month, p.day, p.date_1);
	
	return 0;
}
