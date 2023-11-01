#include<stdio.h>
int areaofRect(int length, int breath)
{
	int area;
	area=(length*breath);
	return area;
}

int main()
{
	int l, b;
	printf("enter the length:");
	scanf("%d",&l);
	printf("enter the breath:");
	scanf("%d",&b);
	int area;
	area=areaofRect(l,b);
	printf("area=%d\n",area);
}


