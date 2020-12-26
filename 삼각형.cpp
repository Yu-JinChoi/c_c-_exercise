#include<stdio.h>
#include<windows.h>

void textcolor(int color_number)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color_number);
}

int main()
{
	int width,height;
	
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };

    cursorInfo.dwSize = 1;

    cursorInfo.bVisible = FALSE;

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
    
	scanf("%d",&height);
	width=2*height-1;

 
	textcolor(1);
	for(int j=0; j<height; j++) {
		for(int k=0; k<height-j-1; k++) printf(" ");
		for(int i=0; i<3; i++) {
		printf("*");
	}
		printf("\n");
	}
		textcolor(7);
}
