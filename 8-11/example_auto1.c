#include<stdio.h>
void fun1();
void fun2();
void main()
{
	int x=100;
	fun2();
	printf("%d\n",x);
}
void fun1()
{
	int x=0;
	printf("%d\n",x);
}
void fun2()
{
	int x=10;
	fun1();
	printf("%d\n",x);
}
