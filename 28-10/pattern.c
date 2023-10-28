#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("enter the numbers of rows:");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>=i;j--)
		{
			printf(" * ");
		}
		printf("\n");
	
	}
}
