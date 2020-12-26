#include<stdio.h>
#include<conio.h>

int tri(int a, int b, char c);

int main()
{
	int x, y;
	char z;
	
	printf("너비 : ");
	scanf("%d", &x);
	printf("높이 : ");
	scanf("%d", &y);
	printf("기호 : ");
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
