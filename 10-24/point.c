#include<stdio.h>
int main()
{
	int a;
	printf("unassigned value of a %d\n:",a);
	a=100;
	printf("assigned value of a %d\n:",a);
	int *ptr;
	ptr=&a;
	printf("value of ptr %u/n:",ptr);

}	
