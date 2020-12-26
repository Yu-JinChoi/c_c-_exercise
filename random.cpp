#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define maxsize 1000

void bubble_sort(int A[], int n);

int main() 

{
 int a[maxsize], n, i;
 srand(time(0));
 
 scanf("%d", &n);
 
 for(i=0; i<n; i++) {
  a[i]=rand();
  printf("%d ", a[i]);  
 
 }
 
 printf("\n");
 
 for(i=0; i<n; i++) {
  bubble_sort(a, n); 
 printf("%d ", a[i]);
 }
  
}

void bubble_sort(int A[], int n)
{
 int i, j, tmp;
 
 for(i=n-1; i>=1; i--) {
  for(j=0; j<i; j++)
  if(A[j]>A[j+1]) {
   tmp=A[j];
   A[j]=A[j+1];
   A[j+1]=tmp;
  }
 }
} 

