#include<stdio.h>
void sum()
{
	static int a=10;
	static int b=45;
	printf("%d\t %d\n",a,b);
	a++;
	b++;
}
void main()
{
	int i;
	for(i=0;i<3;i++)
	{
		sum();
	}
}
