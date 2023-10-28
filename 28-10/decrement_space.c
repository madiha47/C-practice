/* #include<stdio.h>
int main()
{
	int rows, i,j,k;
	printf("enter the number of rows");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
		for(j=i ;j>1;j--)
		{
			printf(" ");
		}
			for(k=rows;k>=i;k--)
			{
				printf("*");
			}
			printf("\n");

		
	}
} */
#include<stdio.h>
int main()
{
	int i, j, k, rows;
	printf("enter the number of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=i;k<=rows;k++)
		{
			printf("*");
		}
		printf("\n");
	
	}
}

