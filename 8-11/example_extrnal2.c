#include<stdio.h>
int main()
{
	extern int x;
	x=10;
	printf("%d",x);
}

