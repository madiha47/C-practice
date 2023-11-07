#include<stdio.h>
typedef int arr[4];
int main()
{
	arr temp={10 ,20 ,30 ,40};
	printf("typedef using an array\n");
	for(int i=0;i<4;i++)
	{
		printf("%d\t",temp[i]);
	}
}
