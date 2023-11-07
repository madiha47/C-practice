#include<stdio.h>
typedef int *ptr;
int main()
{
	ptr var;
	*var=20;
	printf("value of var is %d",*var);
}
