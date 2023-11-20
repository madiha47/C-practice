#include<stdio.h>
int main()
{
	int a[3][3]={{9,8,7},
		     {6,5,4},
		     {3,2,1}};
	int sum=0;
	printf("row total:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum+=a[i][j];
		}
		printf("%d\t",sum);
			sum=0;
	}
	printf("\n column total:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum+=a[j][i];
		}
		printf("%d\n",sum);
		sum=0;
	}
}



