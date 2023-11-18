#include<stdio.h>
void checkevenodd(int n)
{
	int r=n%2;
	if(r==0)
	{
		printf("Even\n");
	}
	else
	{
		printf("Odd\n");
	}
}
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	checkevenodd(n);
}
