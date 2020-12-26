#include<stdio.h>
#define maxsize 10000
int main()
{
	int a[maxsize], i, j, t, k;

	while (1) {
		scanf("%d", &i);
		if (i = 0) break;
		t = t + 1;
	}

	a[1] = a[0] = 1;
	for (k = 0; k <= t; k++) {
		for (j = 2; j <= t; j++) {
			a[j] = a[j - 1] + a[j - 2];
			printf("%d\n", a[t]);
		}
		;
	}

	return 0;
}