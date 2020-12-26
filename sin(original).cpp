#include<stdio.h>
#include<math.h>

#define offset 10
#define width 20
#define vsymbol '|'
#define hsymbol '-'
#define csymbol '*'

#define PI 3.141592
#define delta 0.1

int main()
{
    int i, k, pos, t=0;
    double theta, c, s;	
    
	void draw_v_boundary();
    void blank(int);
    
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
   pos=(int) (width+s*width);
   blank(pos);
   printf("%c", csymbol);
   blank(width-pos-1);
   printf("%c", vsymbol);
   blank(width);
  }
  else {
   pos=(int) (s*width);
   blank(width);
   printf("%c", vsymbol);
   blank(pos);
   printf("%c", csymbol);
   blank(width-pos-1);
  }
  printf("%c", vsymbol);
  printf("\n");
 }
 
 draw_v_boundary();
 
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
