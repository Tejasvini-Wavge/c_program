#include<stdio.h>
void change(int);
void change(int a)
{
	printf("before adding value a=%d\n",a);
	a=200;
		printf("before adding value a=%d\n",a);

}
int main()
{
	int b=100;
		printf("before fun call b=%d\n",b);
		change(b);
		printf("after  =%d\n",b);
		

	
}