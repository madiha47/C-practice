#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int even=0,odd=0;
	for(int i=0;i<10;i++)
	{
		if(arr[i]%2==0)
			even+=arr[i];
			else
			odd+=arr[i];
	}
	printf("the sum of even numbers in the given array is %d\n",even);
	printf("the sum of odd numbers in the given array is %d\n",odd);
}
