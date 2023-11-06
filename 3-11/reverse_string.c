#include<stdio.h>
#include<string.h>
void reversearray( int array[], char start, char end)
{
	int temp;
	while(start<end)
	{
	temp=array[start];
	array[start]=array[end];
	array[end]=temp;
	start++;
	end--;
	}
}

void printarray( char array[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d",array[i]);
	printf("\n");
}

int main()
{
char array[]={'a','b','c','d','e','f'};
int n=sizeof(array)/sizeof(array[0]);
printarray(array,n);
reversearray(array,0,n-1);
printf("reverse array is%d\n",n);
printarray(array,n);
}

