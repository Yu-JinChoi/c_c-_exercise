#include<stdio.h>
#include<stdlib.h>

void select(char **ptr, int n);
int main()
{
	int a;
	char *sentence;
	
	sentence = (char*) malloc(sizeof(char)*10);
	printf("몇번째 속담을 선택하시 겠습니까?: ");
	
	scanf("%d", &a);
	
	select(&sentence, a);
	printf("%s", *sentence);
	
	free(sentence);
	return 0;
	 
}

void select(char **ptr, int n)
{
	static char *name[10]= {
	"a bad workman always blames his tools",
	"a drowning man will catch at a straw",
	"after a storm come calm",
	"all is not gold tha glitters",
	"as you sow so shall you reap",
	"a rolling stone gathers no moss",
	"a wonder lasts but nine dasy",
	"easy come easy go",
	"do in rome as the romans do",
	"every dog has his day"
	};
	
	while(*name[n])
	{
		**ptr=*name[n];
		**ptr++;
		name[n]++;
	}
	
}
