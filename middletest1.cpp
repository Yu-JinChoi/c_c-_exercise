#include<stdio.h>
int main()
{
	int a[10]={0}, i, j;
   for(i=0; i<10; i=i+2) a[i]=i*3-5;
   for(i=9; i>=0; i=i-1) {   
	printf("%d: ", a[i]);
	if(i>5 && i<8) 
           { j=1; while (j>-2) { printf("<%d>%d,", i+j, a[i+j]); j--;}}
	printf("\n");
   }
}
