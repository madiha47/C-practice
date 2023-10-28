/*#include<stdio.h>
int main()
{
	int i, j, k, rows;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<=rows;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i-1);k++)
		{
		printf("*");
		}
	printf("\n");
	}
}*/
#include<stdio.h>
int main()
{
	int i, j, k, n;
	printf("enter the number of rows:");
	scanf("%d",&n);
	for(i=n;i<=1;i++)
	{
		for(j=i;j<=1;j++)
		{
			printf(" ");
		}
		for(k=n;k>=(2*i-1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

