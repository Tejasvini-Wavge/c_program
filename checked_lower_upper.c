#include<stdio.h>
int main()
{
	int ch;
	printf("enter a character:");
	scanf("%d",&ch);
	if(islower(ch)){
		printf("the character '%c' is lowercase\n",ch);
	}
	else if(isupper(ch)){
			printf("the character '%c' is uppercase\n",ch);
	}
	else{
		printf("the character '%c' is not lowercase or not uppercase\n",ch);
	}
}