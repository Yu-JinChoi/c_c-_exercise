#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int n, t, total=0;
	int i=0
	;
	
	printf("입력받을 정수 개수 :");
	scanf("%d", &n);
	
	while(i<n)
	{
		printf("정수입력 :");
		scanf("%d", &t);
		total+=t;
		
		i++;
	 }
	 
	 printf("정수의 평균 :%f", (double)(total)/n);
	
	return 0;
}
