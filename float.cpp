#include<stdio.h>
#define MaxSize 100

int main()
{
	float d[MaxSize];
	int n;
	
	scanf("%d", &n);
	
	for(int p=0; p<n; p++) {
	scanf("%f", &d[p]);
	printf("%5.1f\n", d[p]);			
	}
	

	return 0;
}
