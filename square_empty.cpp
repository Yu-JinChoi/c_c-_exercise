#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int main() {
	int height, width;
	scanf("%d %d", &height, &width);

	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++) {
			if (i == 0 || j == 0 || i == width-1 || j == height-1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
		return 0;
}
