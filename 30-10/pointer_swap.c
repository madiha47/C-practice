#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *p1=&a,*p2=&b;
	printf("before swap:*p1=%d *p2=%d",*p1,*p2);
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	
	printf("\n after swap: *p1=%d *p2=%d\n ",*p1,*p2);
}
