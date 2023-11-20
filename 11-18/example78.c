//Binary search
#include<stdio.h>
int main()
{
	int arr[]={17,23,34,56,61,69,78,84,91,98},search, found=0;
	int low=arr[0];
	int high=(arr[10]/arr[0])-1;
	printf("enter the element to search\n");
	scanf("%d",&search);
	while(low<=high)
	{
	int mid=(low + high)/2;
	if(search<arr[mid])
	{
		high=mid-1;
	}
	else if(search>arr[mid])
	{
		low=mid-1;
	}
	else if (search == arr[mid])
	{
		printf("found at the location %d\n",mid);
		found =1;
		break;
	}
	
	}
}
