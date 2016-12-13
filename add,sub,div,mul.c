#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a value for a\n");
	scanf("%d",&a);
	printf("enter a value for b\n");
	scanf("%d",&b);
	c=a+b;
	printf("\n A+B=%d",c);
	c=a-b;
	printf("\n A-B=%d",c);
	c=a*b;
	printf("\n A X B=%d",c);
	c=a/b;
	printf("\n A/B=%d",c);
}