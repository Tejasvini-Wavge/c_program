#include<stdio.h>
void main(){
	char s[111]="javatpoint";
	int i=0;
	int count=0;
	while(i<11){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			count++;
		}
		i++;
	}
	printf("the no of vowels%d",count);
}