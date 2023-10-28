#include<stdio.h>
int main()
{
	int x=90;
	printf("the address of x %u\n",&x);
	printf("the value store by x %d\n",x);
	int *p=&x;
	int **pp=&p;
	printf("the address of p %u\n",p);
	printf("the value store by p %d\n",*p);
	printf("the address of pp %u\n",pp);
	printf("the value store by pp %d\n",**pp);
}
