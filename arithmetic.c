#include<stdio.h>
int main()
{
	int a,b;
	printf("enter first no=");
	scanf("%d",&a);
	printf("enter second no=");
	scanf("%d",&b);
	int add,sub,multi,div,mod;
	add=a+b;
	sub=a-b;
	multi=a*b;
	div=a/b;
	mod=a%b;
	printf("\naddition:%d",add);
	printf("\nsubstraction:%d",sub);
	printf("\nmultiplication:%d",multi);
	printf("\ndivision:%d",div);
	printf("\nmodulus:%d",mod);
	return 0;
}