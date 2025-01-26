#include<stdio.h>
int main()
{
	int num ,pos;
	printf("Enter Number:");
	scanf("%d",&num);
	printf("Enter Position:");
	scanf("%d",&pos);
	int r=num<<pos;
	printf("\n Left shift Operation Value:%d",r);
	r=num>>pos;
	printf("\n Right shift Operation Value:%d",r);
	
	
}