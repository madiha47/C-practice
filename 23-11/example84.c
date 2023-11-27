#include<stdio.h>
int circle( );
int main()
{
	float area;
	int radius=2;
	area=circle(radius);
	printf("\n %f",area);
}
int circle(int r)
{
	float a;
	a=3.14*r*r;
	return(a);
}

