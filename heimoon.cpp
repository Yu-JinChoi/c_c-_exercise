#include<stdio.h>
int palindrome(char *ptr, int len)
{
   int i,k=len;
   for(i=0;i<(k)/2;i++){
      if(ptr[i] != ptr[(k-1)-i]){
      printf("회문이 아닙니다.");
      return 0;
   }
   i++;
   }
   printf("회문  입니다.");
   return 0; 
 } 
 
 int len(char * ptr)
 { 
    int i=1;
    while(ptr[i] != '\n')
    {
       i++;
    }
    return i;
 }
 
 int main()
 {   
    int arrlen;
    char arr[100];
    scanf("%s", arr);
    arrlen=len(arr);
    palindrome(arr,arrlen);
    
    return 0;
    
 }
