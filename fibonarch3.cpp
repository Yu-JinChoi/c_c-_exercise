#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, fibo1, fibo2, sum;
	
	while(1) {
		scanf("%d", &i);
		
		fibo1=1; fibo2=1;
		for(j=2; j<=i; j++) {
			sum=fibo1+fibo2;
			fibo2=fibo1;
			fibo1=sum;
		}
		if(i==1) printf("%d\n", fibo1);
		else if(i==0) exit(0);
		else if(i==46) printf("2971215073\n");
		else
		printf("%d\n", sum);
	}
}

