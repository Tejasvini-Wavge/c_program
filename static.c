#include<stdio.h>
void fun();
int main()
{
	fun();
	fun();
	fun();
	fun();
}
void fun()
{
	static int a=1;
	int b=1;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	a++;
	b++;
}
	