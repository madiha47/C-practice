#include<stdio.h>
struct pair
{ 
	int max;
	int min;
};
struct pair getminmax(int arr[], int n)
{
	struct pair minmax;
	int i;
	 if(n==1)
	 { 
		 minmax.max=arr[0];
		 minmax.min=arr[0];
		  return minmax;
	 }
	if(arr[0]>arr[1])
		{
		minmax.max=arr[0];
		minmax.min=arr[1];
		}
	else
	{
		minmax.max=arr[1];
		minmax.min=arr[0];
	}
	for(i=2;i<n;i++)
	{
		if(arr[i]>minmax.max)
			minmax.max=arr[i];
		else if(arr[i]<minmax.min)
			minmax.min=arr[i];
	}
	return minmax;
}
int main()
{
	int arr[]={1000,11,45,1,330,3000};
	int arr_size=6;
	struct pair minmax=getminmax(arr,arr_size);
	printf("\n minimum element is %d", minmax.min);
	printf("\n maximun element is %d", minmax.max);
}



