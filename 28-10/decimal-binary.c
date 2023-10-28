#include<stdio.h>
#include<stdlib.h>
int binary(int);
int main()
{
	int n;
	printf("enter the number that you want cover:\n");
	scanf("%d",&n);
	binary(n);
}
int binary(int n)
{
	int a[10],i;
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	printf("binary form of the given number is =\n");
	for(i=i-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}

