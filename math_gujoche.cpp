#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct bok {
	int real;
	int imgy;
}BOK;

/*struct bok도 가능*/ 
BOK plus(struct bok a, struct bok b)
{
	struct bok result;
	result.real= (a).real+(b).real;
	result.imgy= (a).imgy+(b).imgy;
	
	return result;
 }

int main()
{
	struct bok a;
	struct bok b;
	//이곳에 struct bok result;가 있어도 상관없음!! 
	
	printf("합을 구할 복소수를 입력하시오.\n");
	printf("복소수 1 :");
	scanf("%d %d", &(a).real, &(a).imgy);
	printf("복소수 2 :");
	scanf("%d %d", &(b).real, &(b).imgy);
	
	struct bok result;
	result = plus(a, b);
	printf("복소수의 합 : %d+%di", result.real, result.imgy);
	
}
/*int math_1(struct math MATH);

struct math{
	int a;
	int b;
	
}MATH;


int main()
{
	
	math_1(MATH);
	
	return 0;
}

int math_1(struct math MATH)
{
	int m, i, j, n, sum;
	printf("첫번째 :");
	scanf("%d %d", &MATH.a, &MATH.b);
	
	i=MATH.a;
	j=MATH.b;
	
	printf("두번째 :");
	scanf("%d %d", &MATH.a, &MATH.b);
	
	m=MATH.a;
	n=MATH.b;
	
	printf("복소수 :");
	printf("%d+%di", i+m, j+n);
	
}*/


