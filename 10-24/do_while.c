#include<stdio.h>
int main()
{
	int i=1, n=0;
	printf("enter a number:");
	scanf("%d",&n);
	do
	{
		printf("%d\n",n*i);
		i++;
	}
	while(i<=10);
		return 0;
}
