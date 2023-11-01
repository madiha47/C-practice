/*#include<stdio.h>
int main()
{
	 int rem, n, reverse=0;
	 printf	("enter the a number");
	 scanf("%d",&n);
	 while (n!=0)
	 {
		 rem=n%10;
		 reverse=reverse*10+rem;
		 n=n/10;
	 }
	 printf("the reverse number: %d",reverse);
}*/
#include<stdio.h>
int main()
{
	int a[10]={34,56,67,89,90,32,21};
	int i;
	for(i=0;i<9;i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	for(i=8;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

		 
