#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void set_student(struct student a);

struct student{
	int number;
	char name [10];
	double grade;
};


int main()
{
	struct student a;
	
	set_student(a);
	
	return 0;
}

void set_student(struct student a)
{
	scanf("%d %s %d", &a.number, &a.name, &a.grade);
	
	printf("%d %s %d", a.number, a.name, a.grade);
	
}
