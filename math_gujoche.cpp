#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct bok {
	int real;
	int imgy;
}BOK;

/*struct bok�� ����*/ 
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
	//�̰��� struct bok result;�� �־ �������!! 
	
	printf("���� ���� ���Ҽ��� �Է��Ͻÿ�.\n");
	printf("���Ҽ� 1 :");
	scanf("%d %d", &(a).real, &(a).imgy);
	printf("���Ҽ� 2 :");
	scanf("%d %d", &(b).real, &(b).imgy);
	
	struct bok result;
	result = plus(a, b);
	printf("���Ҽ��� �� : %d+%di", result.real, result.imgy);
	
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
	printf("ù��° :");
	scanf("%d %d", &MATH.a, &MATH.b);
	
	i=MATH.a;
	j=MATH.b;
	
	printf("�ι�° :");
	scanf("%d %d", &MATH.a, &MATH.b);
	
	m=MATH.a;
	n=MATH.b;
	
	printf("���Ҽ� :");
	printf("%d+%di", i+m, j+n);
	
}*/


