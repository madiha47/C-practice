#include<stdio.h>
int f(int x, int *py, int **ppz)
{
	int y,z;
	**ppz+;
	z=**ppz;
	*py+=2;
	y=*py;
	x+=3;
	return x+y+z;
}
int main()
{
	int c,*b,**a;
	c=4,b=&c;a=&b;
	printf("%d",f(a,b));
}

