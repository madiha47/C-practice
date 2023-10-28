#include<stdio.h>
int main()
{
	int a[5],i,n;
	printf("enter the values of a array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to search and replaced with 0\n");
	scanf("%d",&n);
	printf("before :\n");
	for(i=0;i<5;i++)
	{
	printf("%d\t",a[i]);
	}
	search(a,n);
	printf("\n after :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
void search(int *a,int n)
{ 
	int i;
	for(i=0;i<5;i++)
	{
	if(*a==n)
	*a=0;
	a++;
	}
}
