/*같은 숫자 입력시 경고후 재입력 추가, 없는 카드 입력시 경고후 재입력 추가, 난이도 메뉴 작성+ 메뉴에 없을시 메뉴 다시 고르게 작성,
 메뉴마다 카드 보여주는 초단위 차이를 둠, 카드의 색과 크기 바꿈, 한 게임 종료시 재시작 혹은 종료 선택 할수 있게 바꿈*/ 

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
 printf("★카드 짝꿍 찾기 게임입니다!!!\n먼저 난이도를 선택해주세요!!!\n난이도에 따라 카드를 보여주는 시간이 달라집니다!!\n\n");
 printf("1. Easy 모드(초보자에게 추천합니다!!)\n");
 printf("2. Normal 모드(Easy 모드가 좀 쉽게 느껴지시나요? 추천추천!!!)\n");
 printf("3. Hard 모드(Easy 모드와 Normal 모드를 마스터한 당신께!! 추천추천!!!)\n");
 printf("4. God 모드 (맙소사!! Hard 모드 마저 마스터 하시다니!! 카드찾기 게임의 신이 되어 보세요!!)\n");
 
 scanf("%d", &mode);
 DELAY_SEC=card_time(mode);
 
 initialize_card_deck(CARD, SHOW, N);
 match=trial=0;
 
 while (match<N) {
  
  display_card_deck(CARD, SHOW, N);
  printf("[당신이 시도한 횟수입니다!!(당신의 수준을 측정합니다!! 긴장하세요!!) : %d]\n", trial);
  scanf("%d %d", &choice1, &choice2);
  success=process_player_choice(CARD, SHOW, N, choice1, choice2);
  
  if(success) match++;
  trial++;
  
 }
 output_score(trial, N);
 
 printf("한번더 하시겠어요??? Y/N\n");
 fflush(stdin);
 scanf("%c", &retry);
 
 if(retry=='N') {
 	printf("종료합니다!!! 감사합니다!\n");
 	break;
 }
 else if(retry=='Y') {
 }
 else  printf("Y 나 N 둘중 하나만 입력해 주세요! 또의외의 것을 입력시 다시시작 합니다.\n"); 	
 
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
 for(i=0; i<2*n; i++) printf("┏-----┓ ");
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
 
 for(i=0; i<2*n; i++) printf("┗-----┛ ");
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
		printf("이미 찾은 카드입니다!! 잘 살피고 입력해주세요!!!!!\n");
		delay(DELAY_SEC);
		return FALSE;
	}
	else if(c1>9 || c2>9) {
		printf("존재하지 않는 카드네요!!!!! 제대로 입력해주세요!\n");
		delay(DELAY_SEC);
		return FALSE;
	}
	else if (CARD[c1]==CARD[c2] && !(c1==c2)) {
		printf("와우!!! %c 무늬의 짝꿍을 찾으셨네요!!! Congratulations!!!\n", CARD[c1]);
		delay(DELAY_SEC);
		SHOW[c1]=SHOW[c2]=TRUE;
		return TRUE;
	}
		else if (c1==c2) {
		printf("같은 카드를 입력하셨네요!!! 꼼수는 나빠요!!\n ");
		delay(DELAY_SEC);
		return FALSE;
	}
	else {
		SHOW[c1]=SHOW[c2]=TRUE;
		display_card_deck(CARD, SHOW, n);
		printf("이런!! 짝꿍이 아니네요!! 다시 시도해주세요!!\n");
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
	printf("\n\n-----\n게임이 끝났습니다!!! 재미있으셨나요??\n");
	printf("%d 번 시도하여 %d 개의 짝꿍을 찾았습니다!!!!! 당신의 등급은? 두구두구두구두구!!!!!!\n", no_try, n);
	
	if(no_try<=(int) (1.5*n)) printf("와우!!! 당신은 지존이시군요???\n");
	else if(no_try<=2*n) printf("훌륭하네요!!!! 좀 더 노력하신다면 지존이 되실수있어요!!!!!\n");
	else if(no_try<3*n) printf("그럭저럭 이네요!!! 좀 더 노력해보세요!!!\n");
	else printf("좀 더 온힘을 다해주시겠어요? 우리 평균적인 사람이 되어보아요!!\n");
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
		printf("없는 난이도 입니다! 착각하셨나요? 다시 선택해주세요!!\n");
		scanf("%d", &turn_time);
		continue;
	}
	}
}
