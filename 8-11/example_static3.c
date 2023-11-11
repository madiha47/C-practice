#include<stdio.h>
void demo();
void main()
{
	demo();
	demo();
	demo();
}
void demo()
{
	static int i=20;
	printf("%d\n",i);
	i++;
}

