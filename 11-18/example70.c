#include<stdio.h>
int main()
{
	int a[2][2][2]={{1,9,8,5},{1,2,7,6},{3,9,5,4}};
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				printf("%d\t",a[i][j][k]);
			}
		}
		printf("\n");
	}
}
