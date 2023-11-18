// program to number is positive, negative or zero
#include<stdio.h>
void main()
{
	int n;
	printf("enter the number n:");
	scanf("%d",&n);
	if(n>0)
		printf("%d is postive number");
	else if(n<0)
		printf(" %d is negaftive number");
	if(n==0)
		printf("%d is zero:");
}
