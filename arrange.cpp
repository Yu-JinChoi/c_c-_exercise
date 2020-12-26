#include<stdio.h>
#include<stdlib.h>
#define MaxSize 100
  
int main()
{
    float i[MaxSize];
    int n, p;
      
    scanf("%d", &n);
      
    if(n>MaxSize) exit(0);
      
    for(p=0; p<n; p++) {
    scanf("%f", &i[p]);
    printf("%5.1f\n", i[p]);            
    }
      
  
    return 0;
}

