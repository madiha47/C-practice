#include<stdio.h>
int max(int);
int main()
{
	int i,n;
	float arry[100];
	printf("enter the number between 1 to 100");
	scanf("%d",&n);
	max(n);
	return 0;
}
int max (int n)
	{
		int i;
		float arry[100];
		for(i=0;i<n;++i)
		{
			printf("number %d =",i+1);
			scanf("%f",&arry[i]);
		}
		for(i=1;i<n;++i)
		{
			if(arry[0]<arry[i])
				arry[0]=arry[i];
		}
	printf("largest element =%f\n",arry[0]);
	}

