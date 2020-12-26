#include <stdio.h>
#include <stdlib.h>

int Fibo(int i)
{
   if(i==1) return 1;
   else if(i==2) return 2;
   else return Fibo(i-1) + Fibo(i-2);
}
int main()
{
   int i;
   
   for(;;){
   scanf("%d", &i);
   if(i==0) exit(1);
   printf("%d\n", Fibo(i));
}
   return 0;
}
