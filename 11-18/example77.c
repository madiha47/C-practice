#include<stdio.h>
int main()
{
	int n, i,search,found=0;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the element of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the elment to be search:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			printf("elemnet found",i);
			found=1;
			break;
		}

	for(i=0;i<n;i++)
	{
		if(!found)
		{
			printf("not found");
			return -1;
		}
	}
	}
}
	
