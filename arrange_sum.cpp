#include<stdio.h>
#include<stdlib.h>
#define MaxSize 1000
  
int main()
{
    int i[MaxSize];
    int n, p;
      
    scanf("%d", &n);
      
    if(n>MaxSize) exit(0);
     
    for(p=0; p<n; p++) {
    scanf("%d", &i[p]);
    printf("%d ", i[p]);	
	}
    
    return 0;
}
