#include<stdio.h>
#include<stdlib.h>
#define MaxSize 1000

int main()
{
	int k[MaxSize];
	int sum=0;
	int i, j, n, t, p;
	
	scanf("%d", &n);
	
	if(n>MaxSize) exit(0);
	
	for(p=1; p<=n; p++) {
		scanf("%d", &k[p]);	
	}
	
	scanf("%d %d", &i, &j);
	for(t=i; t<=j ; t++)
		sum += k[t];
	
	printf("%d", sum);
	
	return 0;
}
