#include<stdio.h>
int rec(int);
int main()
{
	int a, fact;
	printf("\n enter any number");
	scanf("%d",&a);
	fact=rec(a);
	printf("Factorial value =%d",fact);
}
int rec(int x)
{
	int f;
	if(x==1)
	{
	return 1;
	}
	else
	{
	f=x*rec(x-1);
	return (f);
	}
}

