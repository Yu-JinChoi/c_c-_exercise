#include<stdio.h>
int main()
{
	int a=10, b=10, c=10;
	
	a= ++b + ++c;
	a=--c + c;
	printf("%d %d %d", a,b,c); //%5.3f�̸� 5�ڸ����� 3�ڸ��� .���� �� 
	//double�� ����̳� �Է½� lf��� 
}
