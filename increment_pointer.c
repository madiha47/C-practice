#include<stdio.h>
int main()
{
	int n=50;
	int *ptr;
	ptr=&n;
	printf("the addres of p variable is %u\n",ptr);
	ptr=ptr+1;
	printf("after increment pointer p is %u\n",ptr);
}
