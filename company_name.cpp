#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#define NAME 1
#define ID 2

typedef char* String;
enum WorkType {SALES, RESEARCH, PLANNING, FINANCE};

String InHangul[]={"영업", "개발", "기획", "재정"};

typedef struct {
	String name;
	int id;
	enum WorkType department;
	String phone;
	int score;
}Employee;

#define Noperson 4

Employee emp[Noperson]=
{
	{"최유진", 82300, SALES, "255-3404", 87	},
	{"홍길동", 49838, RESEARCH, "344-5434", 67 },
	{"이미진", 65675, PLANNING, "657-3446", 77 },
	{"김승욱", 73674, FINANCE, "376-8995", 78 }
};

int keyword_type(String);
int search(Employee[], int, String);

int main()
{
	char keyword[100], yesno;
	int k;
	
	do{
		printf("사원 이름 또는 사번을 입력하세요.");
		gets(keyword);
		
		k=search(emp, Noperson, keyword);
		
		if(k<0) printf("우리 회사 사원이 아닙니다.\n");
		else {
			printf("사원을 찾았습니다.\n");
			printf("이름:%s 사번:%d 부서:%s 전화:%s 근무 평점:%d\n", emp[k].name, emp[k].id, InHangul[emp[k].department], emp[k].phone, emp[k].score);
		}
		
		printf("더 하시겠습니까? (y/n) ");
		yesno=getch();
		printf("%c\n", yesno);
	} while (yesno!='n' && yesno!='N');
	
	return 0;
}

int keyword_type(String s)
{
	return (s[0]>='0' && s[0]<='9')? ID: NAME;
}

int search (Employee rec[], int no, String key)
{
	int i, type;
	
	type=keyword_type(key);
	
	if(type==ID) { for(i=0; i<no; i++) if(rec[i].id==atoi(key)) return i;
	}
	else if(type==NAME)
	{
		for(i=0; i<no; i++) if(strcmp(rec[i].name,key)==0) return i;
	}
	
	return -1;
}
