#include<stdio.h>
void main(){
	char s[11]="javatpoint";
	int i=0;
	int count=0;
	while(s[i]!=NULL){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			count++;
		}
		i++;
	}
	printf("the no of vowels%d",count);
}