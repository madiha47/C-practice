#include<stdio.h>
int main()
{
	int n=50;
	int *p;
	p=&n;
	printf("address of p variable is %u\n",p);
	p=p-3;
	printf("after subtracting 3: Address of p variable is %u\n",p);
}

