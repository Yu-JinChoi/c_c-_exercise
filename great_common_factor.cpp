#include<stdio.h>

int main()
{
	int m, n, i;
	scanf("%d %d", &n, &m);
	
	for(i=m; i>0; i--) {
		if(m%i==0 && n%i==0) break;
	}
	
	printf("%d", i);
}
