#include<stdio.h>
#define maxsize 46
#include<stdlib.h>

int main()
{
	int a[maxsize], i, j, t;
     
     
    while(1) {
    scanf("%d", &i);    
    a[1]=1;
    a[2]=2;
    if(i==1) {
        printf("%d\n",a[1]);
    }
    else if (i==46) {printf("2971215073\n");
	}
    else if (i==0) exit(0);
    else {
        for(j=3; j<=i; j++) {
         a[j]=a[j-1]+a[j-2];
    }
    printf("%d\n", a[i]);
   }
     
    }
     
    return 0;

}
