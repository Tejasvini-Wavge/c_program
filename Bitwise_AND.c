#include<stdio.h>
int main()
{
	int a,b;
	printf("enter numbers:");
	scanf("%d%d",&a,&b);
	int r=a&b;
	printf("Bitwise AND=%d",r);
	return 0;
}