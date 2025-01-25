#include<stdio.h>
int main()
{
	int a,b;
	printf("enter numbers:");
	scanf("%d",&a);
	printf("enter numbers:");
	scanf("%d",&b);
	int r=a|b;
	printf("Bitwise OR=%d",r);
	return 0;
}