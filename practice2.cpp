#include<stdio.h>
int main()
{
	int a=10, b=10, c=10;
	
	a= ++b + ++c;
	a=--c + c;
	printf("%d %d %d", a,b,c); //%5.3f이면 5자리수중 3자리가 .뒤의 수 
	//double은 출력이나 입력시 lf사용 
}
