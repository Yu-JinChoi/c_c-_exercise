#include<stdio.h>
void clock(int, int *, int *, int *);

int main()
 {
  int time_1, time_2, hour, minute;
  
  scanf("%d", &time_1);
  clock(time_1, &time_2, &hour, &minute);
  
  printf("%d �ð� %d �� %d ���̴�.", hour, minute, time_2);
 }

void clock(int a, int *b, int *c, int *d)
 {
  *b=a%60;
  *c=((a/60)/60)%60;
  *d=(a/60)%60;
 }

