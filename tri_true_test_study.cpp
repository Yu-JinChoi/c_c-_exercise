#include<stdio.h>

void tri(int a, int b, int c)
{
	int max, sum;
	
	if(a<b) {
	if(b<c)	{
		max=c; sum=b+a;
	}
	else {
		max=b; sum=c+a;
	}
	}
	
	else {
		if(a<c) {
		max=c; sum=b+a;	
		}
		else {
		max=a; sum=b+c;
		}
	}
	
	if(max<sum) printf("����\n");
	else 
	printf("�������� �ʴ´�.\n");
	
}

int main()
{
	int i, j, k;

	scanf("%d %d %d", &i, &j, &k);
	tri(i, j, k);
	
	return 0;
}
