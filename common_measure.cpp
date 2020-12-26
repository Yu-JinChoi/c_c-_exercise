#include<stdio.h>
 
int main()
{
	int choice;
	int n, k, T;
	
	scanf("%d",&choice);
	
	if(choice==1) {
    scanf("%d %d",&n,&k);
     
    for (int i=1; i<200; i++) {
    if(n%i==0 && k%i==0) {
        printf("%d ",i);
    }
    }	
	}
    
    if(choice==2) {
    	scanf("%d %d",&n,&k);
    	
		if(n>k) T=k;
    	else T=n;
    	
    	while(!(n%T==0 && k%T==0)) {
    		T=T-1;
		}
		printf("%d",T);
	}
    
    printf("\n");    
    
    return 0;
}

