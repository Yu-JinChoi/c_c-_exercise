#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <windows.h> 
#define OFFSET 10 
#define WIDTH 20 
#define VSYMBOL '|' 
#define HSYMBOL '-' 
#define COSSYMBOL '*' 
#define SINSYMBOL '+' 
#define PI 3.141592 
#define delta 0.2 


void draw_v_boundary(); 
void blank(int); 
int main(void) 
{ 
   int i; 
   int pos; 
   double theta, s,c; 
   char line[WIDTH*2+1]; 
   draw_v_boundary(); 
   for(theta=0.0; theta<2.0*PI; theta+=delta) 
   { 
      s=sin(theta); 
      c=cos(theta); 
      Sleep(50); 
      //clear 
      for(i=0;i<=WIDTH*2;i++)line[i]=' '; 
      line[0]=VSYMBOL;  //WIDTH+-1*WIDTH 
      line[WIDTH]=VSYMBOL;    //WIDTH+0*WIDTH 
      line[WIDTH*2]=VSYMBOL;  //WIDTH+1*WIDTH 
      line[(int)(WIDTH+s*WIDTH)]=SINSYMBOL; 
      line[(int)(WIDTH+c*WIDTH)]=COSSYMBOL; 
      // printf("%7.3f : %2d",s,c,(int)(WIDTH+s*WIDTH)); 
      blank(OFFSET); 
      for(i=0;i<=WIDTH*2;i++)printf("%c",line[i]); 
      printf("\n"); 
   } 
   system("pause"); 
   return 0;   
} 
void blank(int no) 
{ 
   while(0<no--) 
   printf(" "); 
} 
void draw_v_boundary() 
{ 
   int i; 
   blank(OFFSET); 
   for(i=0;i<=2*WIDTH; i++) 
   printf("%c",HSYMBOL); 
   printf("\n"); 
} 
