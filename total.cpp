#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int n, t, total=0;
	int i=0
	;
	
	printf("�Է¹��� ���� ���� :");
	scanf("%d", &n);
	
	while(i<n)
	{
		printf("�����Է� :");
		scanf("%d", &t);
		total+=t;
		
		i++;
	 }
	 
	 printf("������ ��� :%f", (double)(total)/n);
	
	return 0;
}
