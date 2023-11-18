#include<stdio.h>
int main()
{
	int n=9,i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=i)
			//	printf("%d",j);
			printf("\U0001F600");
			else
			printf(" ");
		}
		for(j=n;j>=1;j--)
		{
			if(j<=i)
				//printf("%d",i);
				printf("\U0001F600");
			else
				printf(" ");
		}
	
		printf("\n");
	}
}
