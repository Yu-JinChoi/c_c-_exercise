#include<stdio.h>
#include<stdlib.h>
int main()
{
	int width, height;
	scanf("%d %d", &height, &width);
	for(int i=0; i<height; i++) {
		for(int j=0; j<width; j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
