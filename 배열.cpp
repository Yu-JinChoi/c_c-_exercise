#include<stdio.h>
#include<stdlib.h>
#define MaxSize 1000
#define MaxSized 1000
 
int main()
{
    float i[MaxSize];
	float j[MaxSized];
    int n, p, t, k, max_1, max_2;
     
    scanf("%d %d", &n, &t);
     
    if(n>MaxSize) exit(0);
    if(t>MaxSized) exit(0);
    
    for(p=0; p<n; p++) scanf("%f", &i[p]);
    for(k=0; k<t; k++) scanf("%f", &j[k]);
     
    max_1=i[0];
    for(p=1; p<n; p++) {
	if(i[p]>max_1) max_1=i[p];
	}
	
	max_2=j[0];
	for(k=1; k<t; k++) {
	if(j[k]>max_2) max_2=j[k];
	}
	
	printf("%d\n", max_1+max_2);
     
 
    return 0;
}
