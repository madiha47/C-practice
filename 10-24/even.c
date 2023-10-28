#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array:\n");
	
		scanf("%d",&n);

	int a[n];
	printf("enter the numbers:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			printf("even number are:%d\n",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
			printf("odd number are:%d\n",a[i]);
	}

}
