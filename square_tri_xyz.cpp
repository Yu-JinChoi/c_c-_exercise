#include<stdio.h>
#include<conio.h>

int tri(int a, int b, char c);

int main()
{
	int x, y;
	char z;
	
	printf("�ʺ� : ");
	scanf("%d", &x);
	printf("���� : ");
	scanf("%d", &y);
	printf("��ȣ : ");
	scanf("%d", &z);
	
    tri(x, y, z);
    
	printf("\n");
	
	
}

int tri(int a, int b, char c) 
{
	
	for(int i=0; i<b; i++) {
		for(int j=0; j<a; j++) {
			printf("%c", c);
		}
		printf("\n");
	}
}
