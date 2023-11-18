#include<stdio.h>
#include<stdlib.h>

int binarysearch(int arr[],int l,int r, int x)
{
	if(r>=1)
	{
		int mid=1+(r-1)/2;
		if(arr[mid]==x)
			return mid;
		if(arr[mid]>x)
		{
			return binarysearch(arr,l,mid-1,x);
		}
		return binarysearch(arr,mid+1,r,x);
	}
	return -1;
}

int main()
{
 int arr[]={2,3,4,10,40};
 int size =sizeof(arr)/sizeof(arr[0]);
 int x=10;
 int index=binarysearch(arr,0,size -1,x);
 if (index==-1)
 {
	 printf("elements is not present in a array");
 }
 else
 {
	 printf("elements is present at index %d", index);
 }
return 0;
}

