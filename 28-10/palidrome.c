#include<stdio.h>
int main()
{
	int n, rem,temp,result=0;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		result=(result*10)+rem;
		temp=temp/10;
	}
	if(result==n)
		printf("It is a Palindrome\n");
	else
		printf("it is not a palindrome\n");
}

