#include<stdio.h>
int primenumber(int n)
{
	int i;
	for(i=2;i=n/2;i++)
	{ 
		if(n%i!=0)
			continue;
			else
			return 1;
	}
	return 0;
}
int main()
{
	int n, result=0;
	printf("enter the number:");
	scanf("%d",&n);
	result=primenumber(n);
	if(result==1)
		printf("%d is a prime number",n);
	else
		printf("%d is not a prime number",n);
}
