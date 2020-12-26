#include<stdio.h>

#define MaxClass 100
#define MaxStudent 1000

int main()
{
	int score[MaxClass] [MaxStudent];
	
	int no_class;
	int no_student [MaxClass];
	float ave[MaxClass];
	float var[MaxClass];
	
	void read_score(int *, int [] [MaxStudent], int[]);
	void compute_stat(int *, int[] , float[] , float[] , int [][MaxStudent]);
	void print_result(int *, int[] , float[] , float[]);
	
	read_score(&no_class, score, no_student);
	compute_stat(&no_class, no_student, ave, var, score);
	print_result(&no_class, no_student, ave, var);
	
	return 0;
}

void read_score (int *no_class, int score[] [MaxStudent], int no_student[])
{
	int i, j;
	
	printf("�й� ���� �Է��Ͻÿ�.\n");
	scanf("%d", &*no_class);
	
	for(i=0; i<*no_class; i++) {
		printf("%d�й��� �л� ���� �Է��Ͻÿ�.\n", i+1);
		scanf("%d", &no_student[i]);
		printf("%d���� �л��� ������ �Է��Ͻÿ�.\n", no_student[i]);
		for(j=0; j<no_student[i]; j++) scanf("%d", &score[i][j]);
	}
}

void compute_stat(int *no_class, int no_student[], float ave[], float var[], int score[][MaxStudent]) 
{
	int i, j;
	float sum;
	
	for(i=0; i<*no_class; i++) {
		for(sum=0.0, j=0; j<no_student[i]; j++) sum+=score[i][j];
		ave[i]=sum/no_student[i];
	}
	
	for(i=0; i<*no_class; i++) {
		for(sum=0.0, j=0; j<no_student[i]; j++) sum+=(score[i][j]-ave[i])*(score[i][j]-ave[i]);
		var[i]=sum/no_student[i];
	}
}

void print_result(int *no_class, int no_student[], float ave[], float var[])
{
	int i, j;
	
	printf("�й� �л��� �� �л�\n");
	
	for(i=0; i<*no_class; i++) {
		printf(" %d %d %f %f\n", i+1, no_student[i], ave[i], var[i]);
	}
}
