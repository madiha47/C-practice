#include<stdio.h>
void fun1();
void fun2();
int e=20;
void main()
{
	fun1();
	fun2();
}
void fun1()
{
	extern int e;
	printf("e1 number is %d\n",e);
}
void fun2()
{
	printf("e2 number is %d\n",e);
}
