/* b*cos(t*x)�� �׷��� �߰�, a*sin(t*x)�� b*cos(t*x)�� ��ġ�� �׷��� �׸�, �ٽ� ������ϴ� ���α׷� ����, sin�� cos �׷��� ���� �ٲ�,
�� �׷����� ��ġ�� �κ� ���� �ٲ�, 45���� ���� ����*/ 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

#define offset 10
#define width 20
#define vsymbol '|'
#define hsymbol '-'
#define csymbol '*'

#define PI 3.141592
#define delta 0.1

 void draw_v_boundary();
 void blank(int);
 void sin_1();
 void cos_1();
 void sin_cos();
 void sin_2();
 void cos_2();
 void sin_cos_2();
 void choice_1(int);
 void textcolor(int);
 
 int main()
{
 int choice;
 char choice_2;
 
 while(1) {
 printf("* �޴��� �����Ͻÿ�.\n\n");
 printf("1. sin x �׷���\n");
 printf("2. cos x �׷���\n");
 printf("3. sin x �� cos x�� ���ÿ� �����ִ� �׷���\n");
 printf("4. a�� t�� �Է¹޾� �׸��� a*sin t*x�� �׷���\n");
 printf("5. a�� t�� �Է¹޾� �׸��� a*cos t*x�� �׷���\n");
 printf("6. a�� t�� �Է¹޾� �׸��� a*cos t*x�� a*sin t*x�� �׷���\n\n");
 
 printf("���� �ϼ���. : ");
 scanf("%d", &choice);
 
 choice_1(choice);

 	
 printf("�ٽ� �õ��Ͻðڽ��ϱ�?(Y/N) : ");
 fflush(stdin);
 scanf("%c", &choice_2);	
 
 if(choice_2=='N' || choice_2=='n') {
 	printf("�����մϴ�!!! �����մϴ�!\n");
 	break;
 }
 else if(choice_2=='Y' || choice_2=='y') {
 }
 else printf("Y �� N ���� �ϳ��� �Է��� �ּ���! ���ǿ��� ���� �Է½� �ٽý��� �մϴ�.\n");
 
 system("pause");
 system("cls");
 }
 
 return 0;
}

void draw_v_boundary()
{
 int i;
 void blank(int);
 
 blank(offset);
 for(i=0; i<2*width+3; i++) printf("%c", hsymbol);
 printf("\n");
}

void blank(int no)
{
 while (0<no--) printf(" ");
}

void sin_1()
{
	int i, k=0, pos, t=0;
    double theta, s;
	
	blank(offset);
 
 for(int t=0; t<=2*width+3; t++) {
  if(t==0) printf("-1");
  else if(t==width) printf("0");
  else if(t==2*width+2) printf("1");
  else printf(" ");
 }
 printf("\n");
 
 draw_v_boundary();
 
 for(theta=0.0; theta<=2.0*PI; theta+=delta) {
  if(theta==0) {
  	blank(offset-1);
  	printf("0");
  }
  
  else if(theta==0.7 || theta==1.5000000000000002) {
  	t++;
  	blank(offset-2);
  	printf("%d", (int)((theta*10+1)*5+5*t));
  }
  
  else if(theta==2.3000000000000007 || theta==3.1000000000000014 || theta==3.9000000000000021 || theta==4.6999999999999993) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5));
  }
  
  else if(theta==5.4999999999999964) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+1));
  }
  
  else if(theta==6.1999999999999940) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+6));
  }
  else blank(offset);
  
  printf("%c", vsymbol);
  s=sin(theta);
  
  if(s<0) {
   pos=(int) (width+s*width);
   blank(pos);
   textcolor(12);
   printf("%c", csymbol);
   blank(width-pos-1);
   textcolor(15);
   printf("%c", vsymbol);
   blank(width);
  }
  else {
   pos=(int) (s*width);
   blank(width);
   printf("%c", vsymbol);
   blank(pos);
   textcolor(12);
   printf("%c", csymbol);
   textcolor(15);
   blank(width-pos-1);
  }
  printf("%c", vsymbol);
  printf("\n");
 }
 
 draw_v_boundary();
 
}

void cos_1()
{
	int i, k=0, pos, t=0;
    double theta, c;
	
	blank(offset);
 
 for(int t=0; t<=2*width+3; t++) {
  if(t==0) printf("-1");
  else if(t==width) printf("0");
  else if(t==2*width+2) printf("1");
  else printf(" ");
 }
 printf("\n");
 
 draw_v_boundary();
 
 for(theta=0.0; theta<=2.0*PI; theta+=delta) {
  if(theta==0) {
  	blank(offset-1);
  	printf("0");
  }
  
  else if(theta==0.7 || theta==1.5000000000000002) {
  	t++;
  	blank(offset-2);
  	printf("%d", (int)((theta*10+1)*5+5*t));
  }
  
  else if(theta==2.3000000000000007 || theta==3.1000000000000014 || theta==3.9000000000000021 || theta==4.6999999999999993) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5));
  }
  
  else if(theta==5.4999999999999964) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+1));
  }
  
  else if(theta==6.1999999999999940) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+6));
  }
  else blank(offset);
  
  printf("%c", vsymbol);
  c=cos(theta);
  
  if(c<0) {
   pos=(int) (width+c*width);
   blank(pos);
   textcolor(9);
   printf("%c", csymbol);
   blank(width-pos-1);
   textcolor(15);
   printf("%c", vsymbol);
   blank(width);
  }
  else if(c==1) {
   pos=(int) (c*width);
   blank(width);
   printf("%c", vsymbol);
   blank(pos-1);
   textcolor(9);
   printf("%c", csymbol);
   blank(width-pos-1);
   textcolor(15);
  }
  else {
   pos=(int) (c*width);
   blank(width);
   printf("%c", vsymbol);
   blank(pos);
   textcolor(9);
   printf("%c", csymbol);
   blank(width-pos-1);
   textcolor(15);
  }
  printf("%c", vsymbol);
  printf("\n");
 }
 
 draw_v_boundary();
 	
}

void sin_cos()
{
	int i, k=0, pos_1, pos_2, t=0;
    double theta, s, c;
	
	blank(offset);
 
 for(int t=0; t<=2*width+3; t++) {
  if(t==0) printf("-1");
  else if(t==width) printf("0");
  else if(t==2*width+2) printf("1");
  else printf(" ");
 }
 printf("\n");
 
 draw_v_boundary();
 
 for(theta=0.0; theta<=2.0*PI; theta+=delta) {
  if(theta==0) {
  	blank(offset-1);
  	printf("0");
  }
  
  else if(theta==0.7 || theta==1.5000000000000002) {
  	t++;
  	blank(offset-2);
  	printf("%d", (int)((theta*10+1)*5+5*t));
  }
  
  else if(theta==2.3000000000000007 || theta==3.1000000000000014 || theta==3.9000000000000021 || theta==4.6999999999999993) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5));
  }
  
  else if(theta==5.4999999999999964) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+1));
  }
  
  else if(theta==6.1999999999999940) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+6));
  }
  else blank(offset);
  
  printf("%c", vsymbol);
  s=sin(theta);
  c=cos(theta);
  
  if(s<0) {
   pos_1=(int) (width+s*width);
  	if(s<c){
  		if(c<0) {
  			pos_2=(int) (width+c*width);
  			blank(pos_1);
  			textcolor(12);
  	        printf("%c", csymbol);
  	        blank(pos_2-pos_1-1);
  	        textcolor(9);
  	        printf("%c", csymbol);
  	        blank(width-pos_2-1);
  	        textcolor(15);
  	        printf("%c", vsymbol);
  	        blank(width);
		  }
		else {
			pos_2=(int) (c*width);
			blank(pos_1);
			textcolor(12);
  	        printf("%c", csymbol);
  	        blank(width-pos_1-1);
  	        textcolor(15);
			printf("%c", vsymbol);
			blank(pos_2);
			textcolor(9);
			printf("%c", csymbol);
			blank(width-pos_2-1);
		}
	  }
	else {
		pos_2=(int) (width+c*width);
		blank(pos_2);
		textcolor(9);
		printf("%c", csymbol);
		blank(pos_1-pos_2-1);
		textcolor(12);
		printf("%c", csymbol);
		blank(width-pos_1-1);
		textcolor(15);
		printf("%c", vsymbol);
		blank(width);
	}
  }
  else {
   pos_1=(int) (s*width);  	
   if(s>c) {
   	if(c<0) {
		pos_2=(int) (width+c*width);
		blank(pos_2);
		textcolor(9);
		printf("%c", csymbol);
		blank(width-pos_2-1);
		textcolor(15);
		printf("%c", vsymbol);
		blank(pos_1);
		textcolor(12);
		printf("%c", csymbol);
		blank(width-pos_1-1);
	   }
   	else {
   		pos_2=(int) (c*width);
   		blank(width);
   		printf("%c", vsymbol);
   		blank(pos_2);
   		textcolor(9);
   		printf("%c", csymbol);
   		blank(pos_1-pos_2-1);
   		textcolor(12);
   		printf("%c", csymbol);
   		blank(width-pos_1-1);
	   }
   }
   else {
   	pos_2=(int) (c*width);
   	blank(width);
   	printf("%c", vsymbol);
   	blank(pos_1);
   	textcolor(9);
   	printf("%c", csymbol);
   	if(c==1 && s==0) blank(pos_2-pos_1-2);
   	else blank(pos_2-pos_1-1);
   	textcolor(12);
   	printf("%c", csymbol);
   	blank(width-pos_2-1);
   }
  }
  textcolor(15);
  printf("%c", vsymbol);
  printf("\n");
 }
 
 draw_v_boundary();
}

void sin_2()
{
	int i, k=0, pos, t=0;
    double theta, s;
	int a, T;
	
 printf("\na*sin t*x�� �׷����Դϴ�.\n\n");
 printf("a�� �Է��� �ּ��� : ");
 scanf("%d", &a);
 printf("t�� �Է��� �ּ��� : ");
 scanf("%d", &T);
  
 blank(offset);
 for(int t=0; t<=2*width+3; t++) {
  if(t==0) printf("-%d", a);
  else if(t==width) printf("0");
  else if(t==2*width+2) printf("%d", a);
  else printf(" ");
 }
 printf("\n");
 
 draw_v_boundary();
 
 for(theta=0.0; theta<=2.0*PI; theta+=delta) {
  if(theta==0) {
  	blank(offset-1);
  	printf("0");
  }
  
  else if(theta==0.7 || theta==1.5000000000000002) {
  	t++;
  	blank(offset-2);
  	printf("%d", (int)((theta*10+1)*5+5*t));
  }
  
  else if(theta==2.3000000000000007 || theta==3.1000000000000014 || theta==3.9000000000000021 || theta==4.6999999999999993) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5));
  }
  
  else if(theta==5.4999999999999964) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+1));
  }
  
  else if(theta==6.1999999999999940) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+6));
  }
  else blank(offset);
  
  printf("%c", vsymbol);
  s=sin(theta*T);
  
  if(s<0) {
   pos=(int) (width+s*width);
   blank(pos);
   textcolor(12);
   printf("%c", csymbol);
   blank(width-pos-1);
   textcolor(15);
   printf("%c", vsymbol);
   blank(width);
  }
  else {
   pos=(int) (s*width);
   blank(width);
   printf("%c", vsymbol);
   blank(pos);
   textcolor(12);
   printf("%c", csymbol);
   blank(width-pos-1);
   textcolor(15);
  }
  printf("%c", vsymbol);
  printf("\n");
 }
 
 draw_v_boundary();	
}

void cos_2()
{
	int i, k=0, pos, t=0;
    double theta, c;
    int a, T;
    
 printf("\na*cos t*x�� �׷����Դϴ�.\n\n");
 printf("a�� �Է��� �ּ��� : ");
 scanf("%d", &a);
 printf("t�� �Է��� �ּ��� : ");
 scanf("%d", &T);
 	
	blank(offset);
 
 for(int t=0; t<=2*width+3; t++) {
  if(t==0) printf("-%d", a);
  else if(t==width) printf("0");
  else if(t==2*width+2) printf("%d", a);
  else printf(" ");
 }
 printf("\n");
 
 draw_v_boundary();
 
 for(theta=0.0; theta<=2.0*PI; theta+=delta) {
  if(theta==0) {
  	blank(offset-1);
  	printf("0");
  }
  
  else if(theta==0.7 || theta==1.5000000000000002) {
  	t++;
  	blank(offset-2);
  	printf("%d", (int)((theta*10+1)*5+5*t));
  }
  
  else if(theta==2.3000000000000007 || theta==3.1000000000000014 || theta==3.9000000000000021 || theta==4.6999999999999993) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5));
  }
  
  else if(theta==5.4999999999999964) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+1));
  }
  
  else if(theta==6.1999999999999940) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+6));
  }
  else blank(offset);
  
  printf("%c", vsymbol);
  c=cos(T*theta);
  
  if(c<0) {
   pos=(int) (width+c*width);
   blank(pos);
   textcolor(9);
   printf("%c", csymbol);
   blank(width-pos-1);
   textcolor(15);
   printf("%c", vsymbol);
   blank(width);
  }
  else if(c==1) {
   pos=(int) (c*width);
   blank(width);
   printf("%c", vsymbol);
   blank(pos-1);
   textcolor(9);
   printf("%c", csymbol);
   blank(width-pos-1);
  }
  else {
   pos=(int) (c*width);
   blank(width);
   printf("%c", vsymbol);
   blank(pos);
   textcolor(9);
   printf("%c", csymbol);
   blank(width-pos-1);
  }
  textcolor(15);
  printf("%c", vsymbol);
  printf("\n");
 }
 
 draw_v_boundary();
}

void sin_cos_2()
{
	int i, k=0, pos_1, pos_2, t=0;
    double theta, s, c;
    int a, T, b, p;
    
	printf("a*sin t*x�� b*cos p*x�� �׷����Դϴ�.\n\n");
	printf("a�� �Է��� �ּ��� : ");
	scanf("%d", &a);
	printf("t�� �Է��� �ּ��� : ");
	scanf("%d", &T);
	printf("b�� �Է��� �ּ��� : ");
	scanf("%d", &b);
	printf("p�� �Է��� �ּ��� : ");
	scanf("%d", &p); 
	
	blank(offset);
 
 for(int t=0; t<=2*width+3; t++) {
  if(t==0) printf("-%d", a<b?b:a );
  else if(t==width) printf("0");
  else if(t==2*width+2) printf("%d", a<b?b:a );
  else printf(" ");
 }
 printf("\n");
 
 draw_v_boundary();
 
 for(theta=0.0; theta<=2.0*PI; theta+=delta) {
  if(theta==0) {
  	blank(offset-1);
  	printf("0");
  }
  
  else if(theta==0.7 || theta==1.5000000000000002) {
  	t++;
  	blank(offset-2);
  	printf("%d", (int)((theta*10+1)*5+5*t));
  }
  
  else if(theta==2.3000000000000007 || theta==3.1000000000000014 || theta==3.9000000000000021 || theta==4.6999999999999993) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5));
  }
  
  else if(theta==5.4999999999999964) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+1));
  }
  
  else if(theta==6.1999999999999940) {
  	k++;
  	blank(offset-3);
  	printf("%d", (int)((theta*10+1)*5+(k+2)*5+6));
  }
  else blank(offset);
  
  printf("%c", vsymbol);
  
  if(a>b) {
  	s=sin(T*theta);
  	c=(float)(1/b)*cos(p*theta);
  }
  else if(a==b) {
  	s=sin(T*theta);
  	c=cos(p*theta);
  }
  else {
  	s=(float)(1/a)*sin(T*theta);
  	c=cos(p*theta);
  }
  
  if(s<0) {
   pos_1=(int) (width+s*width);
  	
	  if(s<c){
  		if(c<0) {
  			pos_2=(int) (width+c*width);
			blank(pos_1);
            if(c-s<0.1) {
			textcolor(13);
  	        printf("%c", csymbol);	
            blank(width-pos_1-1);	
			}
			else {
			textcolor(12);
			printf("%c", csymbol);
			blank(pos_2-pos_1-1);
  	        textcolor(9);
  	        printf("%c", csymbol);
  	        blank(width-pos_2-1);	
			}
  	        textcolor(15);
  	        printf("%c", vsymbol);
  	        blank(width);
		  }
		else {
			pos_2=(int) (c*width);
			blank(pos_1);
			textcolor(12);
  	        printf("%c", csymbol);
  	        blank(width-pos_1-1);
  	        textcolor(15);
			printf("%c", vsymbol);
			blank(pos_2);
			textcolor(9);
			printf("%c", csymbol);
			blank(width-pos_2-1);
		}
	  }
	else {
		pos_2=(int) (width+c*width);
		if(s-c<0.1) {
		blank(pos_2);
		textcolor(13);
		printf("%c", csymbol);
		blank(width-pos_2-1);	
		}
		else {
		blank(pos_2);
		textcolor(9);
		printf("%c", csymbol);
		blank(pos_1-pos_2-1);
		textcolor(12);
		printf("%c", csymbol);
		blank(width-pos_1-1);	
		}
		textcolor(15);
		printf("%c", vsymbol);
		blank(width);
	}
  }
  else {
   pos_1=(int) (s*width);  	
   
   if(s>c) {
   	if(c<0) {
		pos_2=(int) (width+c*width);
		blank(pos_2);
		textcolor(9);
		printf("%c", csymbol);
		blank(width-pos_2-1);
		textcolor(15);
		printf("%c", vsymbol);
		blank(pos_1);
		textcolor(12);
		printf("%c", csymbol);
		blank(width-pos_1-1);
	   }
   	else {
   		pos_2=(int) (c*width);
   		blank(width);
   		printf("%c", vsymbol);
   		blank(pos_2);
   		if(s-c<0.1) {
   		textcolor(13);	
   		printf("%c", csymbol);
   		blank(width-pos_2-1);
		   }
		else {
		textcolor(9);
		printf("%c", csymbol);
   		blank(pos_1-pos_2-1);
   		textcolor(12);
   		printf("%c", csymbol);
   		blank(width-pos_1-1);
		}
	   }
   }
   else {
   	pos_2=(int) (c*width);
   	blank(width);
   	printf("%c", vsymbol);
   	blank(pos_1);
   	if(c-s<0.1) {
   	textcolor(13);
   	printf("%c", csymbol);
   	blank(width-pos_1-1);
	   }
   	else {
   	textcolor(12);
   	printf("%c", csymbol);
   	if(c==1 && s==0) blank(pos_2-pos_1-2);
   	else blank(pos_2-pos_1-1);
   	textcolor(9);
   	printf("%c", csymbol);
   	blank(width-pos_2-1);	
	   }
   }
  }
  textcolor(15);
  printf("%c", vsymbol);
  printf("\n");
 }
 
 draw_v_boundary();
 	
}

void choice_1(int choice)
{
   int time;
   
	if(choice==1) sin_1();
	
	else if(choice==2) cos_1();
	
	else if(choice==3) sin_cos();
	
	else if(choice==4) sin_2();
	
	else if(choice==5) cos_2();
	
	else if(choice==6) sin_cos_2();
	
   while(choice>6) {
	if(choice>6) {
	  printf("���� �޴��Դϴ�. �޴��� �ٽ� �Է��� �ּ���!! :"); 
	  scanf("%d", &choice);
	  continue;
	}
   }	
}

void textcolor(int color_number)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color_number);
}
