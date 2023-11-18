#include<stdio.h>
int factorial(int a)
{
	if(a!=1)
	{
		return a*factorial(a-1);

	}
	else
	{
		return a;
	}
}
int main()
{
int a,t;
scanf("%d",&a);
t=factorial(a);
printf("\n %d",t);
return 0;
}

