#include<stdio.h>
int main()
{ 
	int original[10]={1,2,3,4,5,6,7,8,9,10};
	int copy[10],i;
        	for(int i=0;i<10;i++)
	{
		printf("the original array is %d\n",original[i]);
	  }
	for(int i=0;i<10;i++)
	{
		 copy[i]=original[i];
	}
	for(int i=0;i<10;i++)
	{
		printf("the copied array from the original array is :%d\n",copy[i]);
	}

}
