#include<stdio.h>
int main()
{
	int n, k;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		for(int k=0; k<n-i-1; k++) printf(" ");
		for(int j=0; j<2*i+1; j++) { 
		if(i==n-1 || j==0 || j == 2*i) printf("*");
		else printf(" ");
		}
		printf("\n");
	}
	
	if(!(n%2==0)) {
	for(int m=0; m<n-1; m++) {
		for(int t=0; t<m+1; t++) printf(" ");
		for(int h=0; h<(n-m-2)*2+1; h++) printf("*");
		printf("\n");
		
	}	
	}
	
	else
	for(int m=0; m<n; m++) {
		for(int t=0; t<m; t++) printf(" ");
		for(int h=0; h<(n-m-1)*2+1; h++) printf("*");
		printf("\n");
	}
	return 0;
}
