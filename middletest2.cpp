#include<stdio.h>
#define Max 1000

int main()
{
	int k[Max];
	int n, i;
	
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		scanf("%d", &k[i]);
	}
	printf("%d ", k[0]);
	
	for(i=n-2; i>0; i--) {
		printf("%d ", k[i]);
	}
	printf("%d", k[n-1]);
	
	return 0;
}
