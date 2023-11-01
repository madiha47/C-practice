#include<stdio.h>
#include<stdlib.h>

int findlargest(int *arr, int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		if (*arr<*(arr+i))
				{
				*arr=*(arr+i);}

	}
printf("%d",*arr);
}
int main()
{
	  int i, n=4;
	  int *arr;
	  arr= (int*) calloc(n, sizeof(int));
	  if (arr==0)
	  {
		  printf("no memory allocated");
		  return 0;
	  }
	  *(arr +0)=14;
	  *(arr+1)=12;
	  *(arr+2)=19;
	  *(arr+3)=20;

	  findlargest(arr,n);
}
