#include<stdio.h>
int add(int, int);
int sub(int, int);
int multi(int, int);
int divide(int, int);
int main()
{
	int x, y;
	printf("enter 2 values x and y\n");
	scanf("%d %d",&x,&y);

	printf(" addition of %d+%d = %d\n",x,y,add(x,y));
	printf("subtraction of %d-%d = %d\n", x,y,sub(x,y));
	printf("multiplication of %d*%d = %d\n", x,y,multi(x,y));
	printf("division of %d/%d = %d\n",x,y,divide(x,y));
}

int add(int x, int y)
{
	return(x+y);
}

int sub(int x, int y)
{
	return(x-y);
}
int multi(int x, int y)
{
	return(x*y);
}
int divide(int x, int y)
{
	float z;
	z=x/y;
	return z;
}


