#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number to check to odd or even\n");
	scanf("%d",&num);
    if(num%2==0)
    printf("\n%d is an even number\n",num);
    else
    printf("\n%d is a odd number\n",num);
}
