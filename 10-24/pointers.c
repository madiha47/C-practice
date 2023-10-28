#include<stdio.h>




int main()
{



	int x;


	printf("before assigning value to x : %d\n",x);

	x =10;
	printf("after assigning value to x : %d\n",x);


	printf("address of x: %u\n",&x);
	int *ptr;

	ptr = &x;
	printf("address of ptr %u\n", &ptr);

	printf("address hold by ptr :%u\n", ptr);


	printf("value at address in ptr : %d\n", *ptr);

	return 0;
}
