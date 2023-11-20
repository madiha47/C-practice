#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,m,n,p,q;
	printf("enter the number of rows for first matrix:\n");
	scanf("%d",&m);
	printf("enter the number of columns for first matrix:\n");
	scanf("%d",&n);
	printf("enter the number of rows for second matrix:");
	scanf("%d",&p);
	printf("enter teh number of columns for second matrix:");
	scanf("%d",&q);

	if((m==p)&(n==q))
	{
		printf("enter the values for first matrix:");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter the values for second matrix:");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("Addition of 2 matrices is :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]+b[i][j]);
			}
			printf("\n");
		}
		printf("subtraction of two matrices is :\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d\t",b[i][j]-b[i][j]);
			}
			printf("\n");
		}
		printf("multiplication of 2 matrices is:\n");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]*b[i][j]);

		}
		
		}

	}
}
