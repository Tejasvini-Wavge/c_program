#include<stdio.h>
static void greet();
static int b=100;
void display_message();
static void greet(){
	printf("hello from static function!\n");
	
}
void display_message(){
	printf("this is a message from regular function!\n");
	
}
int main()
{
	display_message();
	greet();
	printf("b=%d",b);
}