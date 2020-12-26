/*���� ���� �Է½� ����� ���Է� �߰�, ���� ī�� �Է½� ����� ���Է� �߰�, ���̵� �޴� �ۼ�+ �޴��� ������ �޴� �ٽ� ���� �ۼ�,
 �޴����� ī�� �����ִ� �ʴ��� ���̸� ��, ī���� ���� ũ�� �ٲ�, �� ���� ����� ����� Ȥ�� ���� ���� �Ҽ� �ְ� �ٲ�*/ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


#define N 5

#define TRUE 1
#define FALSE 0

 void initialize_card_deck(char [], char [], int);
 void display_card_deck(char [], char [], int);
 int process_player_choice(char [], char [], int, int, int);
 void output_score(int, int);
 void textcolor(int color_number);
 int card_time(int turn_time);
 void delay(int t);
 int DELAY_SEC;
 
int main()
{
 char CARD[2*N];
 char SHOW[2*N];
 int match;
 int trial;
 int success, choice1, choice2, mode;
 char retry=0;
 
 while(1) {
 printf("��ī�� ¦�� ã�� �����Դϴ�!!!\n���� ���̵��� �������ּ���!!!\n���̵��� ���� ī�带 �����ִ� �ð��� �޶����ϴ�!!\n\n");
 printf("1. Easy ���(�ʺ��ڿ��� ��õ�մϴ�!!)\n");
 printf("2. Normal ���(Easy ��尡 �� ���� �������ó���? ��õ��õ!!!)\n");
 printf("3. Hard ���(Easy ���� Normal ��带 �������� ��Ų�!! ��õ��õ!!!)\n");
 printf("4. God ��� (���һ�!! Hard ��� ���� ������ �Ͻôٴ�!! ī��ã�� ������ ���� �Ǿ� ������!!)\n");
 
 scanf("%d", &mode);
 DELAY_SEC=card_time(mode);
 
 initialize_card_deck(CARD, SHOW, N);
 match=trial=0;
 
 while (match<N) {
  
  display_card_deck(CARD, SHOW, N);
  printf("[����� �õ��� Ƚ���Դϴ�!!(����� ������ �����մϴ�!! �����ϼ���!!) : %d]\n", trial);
  scanf("%d %d", &choice1, &choice2);
  success=process_player_choice(CARD, SHOW, N, choice1, choice2);
  
  if(success) match++;
  trial++;
  
 }
 output_score(trial, N);
 
 printf("�ѹ��� �Ͻðھ��??? Y/N\n");
 fflush(stdin);
 scanf("%c", &retry);
 
 if(retry=='N') {
 	printf("�����մϴ�!!! �����մϴ�!\n");
 	break;
 }
 else if(retry=='Y') {
 }
 else  printf("Y �� N ���� �ϳ��� �Է��� �ּ���! ���ǿ��� ���� �Է½� �ٽý��� �մϴ�.\n"); 	
 
 system("pause");
 system("cls");
 }
}

void initialize_card_deck(char CARD[], char SHOW[], int n)
{
 int i;
 void shuffle_deck(char[], int);
 
 for(i=0; i<n; i++) CARD[2*i]=CARD[2*i+1]='A'+i;
 shuffle_deck(CARD, n);
 for(i=0; i<2*n; i++) SHOW[i]=FALSE;
}

void shuffle_deck(char C[], int n)
{
 int r1, r2, i, tmp;
 
 srand((unsigned int) time(NULL));
 
 for(i=0; i<2*n; i++) {
  r1=rand()%(2*n);
  r2=rand()%(2*n);
  tmp=C[r1]; C[r1]=C[r2]; C[r2]=tmp;
 }
}

void display_card_deck(char CARD[], char SHOW[], int n)
{
 int i;
 void clear_screen();
 
 clear_screen();
 
 textcolor(14);
 for(i=0; i<2*n; i++) printf("    %d     ",i);
 printf("\n");
 
 textcolor(3); 
 for(i=0; i<2*n; i++) printf("��-----�� ");
 printf("\n"); 
 
 for(i=0; i<2*n; i++) printf("|       | ");
 printf("\n");

 for(i=0; i<2*n; i++)  {
 	
	printf("|");
    textcolor(13);
    printf("   %c   ", (SHOW[i]==TRUE)? CARD[i] : '?');
    textcolor(3);
    printf("| ");
 }
 
 printf("\n");
 for(i=0; i<2*n; i++) printf("|       | ");
 printf("\n");
 
 for(i=0; i<2*n; i++) printf("��-----�� ");
 printf("\n");
 textcolor(15);
} 

void clear_screen()
{
	system("cls");
}

int process_player_choice(char CARD[], char SHOW[], int n, int c1, int c2)
{
	void delay(int);
	
	if(SHOW[c1]==TRUE || SHOW[c2]==TRUE) {
		printf("�̹� ã�� ī���Դϴ�!! �� ���ǰ� �Է����ּ���!!!!!\n");
		delay(DELAY_SEC);
		return FALSE;
	}
	else if(c1>9 || c2>9) {
		printf("�������� �ʴ� ī��׿�!!!!! ����� �Է����ּ���!\n");
		delay(DELAY_SEC);
		return FALSE;
	}
	else if (CARD[c1]==CARD[c2] && !(c1==c2)) {
		printf("�Ϳ�!!! %c ������ ¦���� ã���̳׿�!!! Congratulations!!!\n", CARD[c1]);
		delay(DELAY_SEC);
		SHOW[c1]=SHOW[c2]=TRUE;
		return TRUE;
	}
		else if (c1==c2) {
		printf("���� ī�带 �Է��ϼ̳׿�!!! �ļ��� ������!!\n ");
		delay(DELAY_SEC);
		return FALSE;
	}
	else {
		SHOW[c1]=SHOW[c2]=TRUE;
		display_card_deck(CARD, SHOW, n);
		printf("�̷�!! ¦���� �ƴϳ׿�!! �ٽ� �õ����ּ���!!\n");
		delay(DELAY_SEC);
		SHOW[c1]=SHOW[c2]=FALSE;
		return FALSE;
		
	}
}

void delay(int t)
{
	time_t start=time(NULL);
	
	while (difftime(time(NULL), start)<t);	
}

void output_score(int no_try, int n)
{
	printf("\n\n-----\n������ �������ϴ�!!! ��������̳���??\n");
	printf("%d �� �õ��Ͽ� %d ���� ¦���� ã�ҽ��ϴ�!!!!! ����� �����? �α��α��α��α�!!!!!!\n", no_try, n);
	
	if(no_try<=(int) (1.5*n)) printf("�Ϳ�!!! ����� �����̽ñ���???\n");
	else if(no_try<=2*n) printf("�Ǹ��ϳ׿�!!!! �� �� ����ϽŴٸ� ������ �ǽǼ��־��!!!!!\n");
	else if(no_try<3*n) printf("�׷����� �̳׿�!!! �� �� ����غ�����!!!\n");
	else printf("�� �� ������ �����ֽðھ��? �츮 ������� ����� �Ǿ�ƿ�!!\n");
}

void textcolor(int color_number)
{
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),color_number);
}

int card_time(int turn_time)
{
	int time;
		
		if(turn_time==1) {
		time=4;
		return time;
	}
	
	else if(turn_time==2) {
		time=3;
		return time;
	}
	
	else if(turn_time==3) {
		time=2;
		return time;
	}
	
	else if(turn_time==4) {
		time=1;
		return time;
	}
	while(turn_time>4) {
		if(turn_time>4) {
		printf("���� ���̵� �Դϴ�! �����ϼ̳���? �ٽ� �������ּ���!!\n");
		scanf("%d", &turn_time);
		continue;
	}
	}
}
