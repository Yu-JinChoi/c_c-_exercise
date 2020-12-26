#include<stdio.h>
#include<stdlib.h>
#define Max 1000

void change_sum(int x[], int y[], int *z);
int main()
{
	int a[Max], b[Max];
	int n;
	int x;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) scanf("%d", &b[i]);
	
	change_sum(a, b, &n);
}

void change_sum(int x[], int y[], int *z)
{
	int c[Max];
	int i;
	
	for(i=0; i<*z; i++) {
		c[i]=x[i]+y[i];
	}
	for(i=0; i<*z; i++) printf("%d ",c[i]); 
}
