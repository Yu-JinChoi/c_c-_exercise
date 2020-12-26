#include<stdio.h>

int main()
{
	int k, n, m, T, i;
	scanf("%d %d %d",&k,&n,&m);
	
	if (k<n<m, n<k<m) T=m;
	else if(k<m<n, m<k<n) T=n;
	else T=k;
	
	for(i=1; i<T; i++) {
	while (!(n%i==0 && k%i==0 && m%i==0))
	i=i+1;
	
	printf("%d",i);
	
	i=i+1;		
	}
	return 0;
}
