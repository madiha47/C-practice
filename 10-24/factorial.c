#include<stdio.h>
int main()
{
	int n;
	int f;
	printf("enter number:");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial of %d is %d\n", n,f);
}
int fact(int x)
{
	if(x<=1)
		return 1;
	else

	return x*fact(x-1);
}
