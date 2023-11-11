#include<stdio.h>
int main()
{
	int x=10;
	printf("%d\n",++x);
	{
		int x=20;
		for(int i=0;i<3;i++)
		{
			printf("%d\n",x);
		}
	}
	printf("%d\n",x);
}
