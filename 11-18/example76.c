#include<stdio.h>
int main()
{
	int arr[ ]={10,20,30,40,50,60,70};
	int found;
	for(int i=0;i<7;i++)
	{
		printf("%d\n",arr[i]);
	}
	int search;
	printf("enter the element to be search\n",search);
	scanf("%d",&search);
	for(int i=0;i<7;i++)
	{
		if(arr[i]==search)
		{
			printf("element found",i);
			found=1;
			break;
		}
		else
		{
		printf("element not found");
		return -1;
		}
				
	}	
}
