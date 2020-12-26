#include<stdio.h>

int max(int a, int b)
{
	int max;
	
	if(a<b) max=b;
	else max=a;
	
	return max;
}

int main()
{
	int x, num_1, num_2;
	scanf("%d %d", &num_1, &num_2);
    x = max(num_1, num_2);
    
    printf("%d",x);
	return 0;
}
