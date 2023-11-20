#include<stdio.h>
int main()
{
	int i,j,swap,n;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	int array[n];
	printf("enter the number \n");
	for(i=0;i<n;++i)

		scanf("%d",&array[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				swap=array[i];
				array[i]=array[j];
				array[j]=swap;
			}
		}
	}
	printf("the number arragned in acending order are given below:\n");
	for(i=0;i<n;i++)
	printf("%d\n",array[i]);
}

