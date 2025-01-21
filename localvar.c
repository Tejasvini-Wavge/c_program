#include<stdio.h>
void display();
int main()
{
	int a; //local variable
	printf("\n a=%d",a);
	printf("\n Enter number:");
	scanf("%d",&a);
	printf("\na=%d",a);
	display();
	return 0;
}
void display()
{
	int b=20;
	printf("\nHello");
//	printf("a=%d,a");
	printf("\nb=%d",b);
}