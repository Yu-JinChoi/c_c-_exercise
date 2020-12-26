#include<stdio.h>
int main(void)
{
	int x,y,i,t,j;
	scanf("%d %d",&x,&y);
	
	if(x>y)t=y;
	else t=x;
	
	
	for(i=t;i>0;i--){
	if(x%i==0&&y%i==0) printf("%d ",i);
	} 
	
	return 0;
	}
