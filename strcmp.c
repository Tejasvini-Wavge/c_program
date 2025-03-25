#include<stdio.h>
#include<string.h>
int main(){
	char s1[]="HELLO";
	char s2[]="HELLO";
	if(strcmp(s1,s2)==0){
		printf("strings are equal\n");
	}else{
		printf("string  are not equal :%s");
	}
	
	return 0;
}