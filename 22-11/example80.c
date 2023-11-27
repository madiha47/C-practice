#include<stdio.h>
void printmsg(void);
void runcallback(void(*ptr)(void));
int main(void)
{
	//address of print function is passed as an argument to function runcallback.
	runcallback(&printmsg);
	return 0;
}
void printmsg()
{
	printf("Hello world");
}
//this function take fuction as an arguments
void runcallback(void(*ptr)(void))
{
	(*ptr)();
}
