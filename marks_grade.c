#include<stdio.h>
#include<stdio.h>
int main()
{
	int marks;
	printf("enter a marks");
	scanf("%d",&marks);
	if(marks>85&&marks<=100){
		printf("pass!you scored grade A");
	}
	else if(marks>60&&marks<=85){
	printf("pass!you scored grade B+");	
	}
	else if(marks>40&&marks<=60){
    printf("pass!you scored grade B");
}
    
	else if(marks>30&&marks<=40){
    printf("pass!you scored grade C");	
	
		}
		else{
			printf("sorry you are fail");
		}
	}
