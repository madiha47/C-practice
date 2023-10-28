#include<stdio.h>
int main()
{
	int n;
	printf("enter size of array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of n :\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[n]);
	}
//	int arr[]={11,22,33,44,55,66,77};//
	fun(&arr,n);
	return 0;
}
void fun(int *p, int x)
{
//	for(int i=0;i<x;i++)//
	{
		printf("value of arr[%d] is %d\n",i,*p);
		p++;
	}
}
