#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("enter the number of rows\n");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf(" %d ",i);
		}
		printf("\n");
	}
}

