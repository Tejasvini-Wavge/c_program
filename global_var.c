#include<stdio.h>
int c;
void display();
int main()
{
	int a;
	printf("a=%d",a);
	printf("\n enter number=");
	scanf("%d",&a);
	printf("\na=%d",a);
	printf("\n c=%d",c);
	display();
	return 0;
}
void display()
{
	int b=22;
	printf("\n Hello");
	printf("\nb=%d",b);
	printf("\nc=%d",c);
}