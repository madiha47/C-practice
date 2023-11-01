#include<stdio.h>
int *fun() // p comes and return the address of y 
{
	int y=10;
	return &y;
}
int main()
{
	int *p=fun(); // craete p contains fun() called
	printf("%d",*p);
}

// again it come back variable y is no longer avaiable
// therefore we say that p is danging pointer as it de-allocated menory


