#include<stdio.h>
#include<string.h>
#define maxsize 1000

int main()
{
	char line[maxsize]; 
	int i, num[10]={0};
	
	gets(line);
	
	for(i=0; i<strlen(line); i++) {
		if(line[i]>='0'&&line[i]<='9')
		num[line[i]-'0']++;
	}
	for(i=0; i<=9; i++) {
		printf("%d ", num[i]);
	}
	return 0;
}
