#include<stdio.h>
#include<string.h>
int main(){
	char s[100]="this is javatpoint with c and java";
	char *sub;
	sub=strstr(s,"java");
	
	printf("\nsubstring is:%s\n",sub);
	return 0;
}