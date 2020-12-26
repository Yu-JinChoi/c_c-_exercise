#include<stdio.h>
#include<stdlib.h>

#define MaxSiz 1000
int board[MaxSiz][MaxSiz];

int main()
{
	int siz;
	void magic_square(int);
	void print_board(int);
	
	printf("마방진의 보드 크기를 입력하시오.\n");
	scanf("%d", &siz);
	if(siz>MaxSiz) { printf("크기 제한을 넘었습니다.\n"); exit(1); }
	
	magic_square(siz);
	print_board(siz);
	return 0;
}

void magic_square(int n)
{
	int k, x, y, next_x, next_y;
	
	for(y=0; y<n; y++)
	for(x=0; x<n; x++) board[y][x]=0;
		
	k=1;
	y=0; x=n/2;
	while(k<=n*n) {
		board[y][x]=k;
			
		next_x=x-1; next_y=y-1;
		if(next_x<0) next_x=n-1;
		if(next_y<0) next_y=n-1;
		
		if(board[next_y][next_x]!=0) y++;
		else {x=next_x; y=next_y;}
			
		k++;
	}
}

void print_board(int n)
{
  int i,j;
   for(i=0; i<n; i++)
   {
      for(j=0; j<n; j++)
      {
         printf("%6d", board[i][j]);
      }
      printf("\n");
   }
}
