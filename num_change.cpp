#include<stdio.h>
#include<stdlib.h>
#define Max 1000

void change(int x[], int y[], int z);

int main()
{
	int a[Max], b[Max];
	int n;
	
	scanf("%d", &n);
	
	change(a, b, n);
	
	for(int i=0; i<n; i++) printf("%d ", a[i]);
	printf("\n");
	for(int i=0; i<n; i++) printf("%d ", b[i]);
}

void change(int x[], int y[], int z)
{
	int tmp;
	/* �Լ��� scanf�� �����Լ����� ���°��� ȿ������ ����!!!*/ 
	for(int i=0; i<z; i++) {
		scanf("%d", &x[i]); 
	}
	for(int i=0; i<z; i++) {
		scanf("%d", &y[i]);
	}
	for(int i=0; i<z; i++) {
		tmp=x[i];
		x[i]=y[i];
		y[i]=tmp;
	}
	 
 } 
