#include<stdio.h>

int fac(int a)
{
	int total=a;
	for(int i=1; i<a; i++) {
		total=total*i;
	}

	return total;
}

int main()
{
	int n, x;
	scanf("%d", &n);
	
	x=fac(n);
	
	printf("%d", x);
	return 0;
}
