#include<stdio.h>
#define Max 3
int main()
{
	int a[]={10,100,200};
	int i, *p[Max];
	for(i=0;i<Max;i++)
	{
		p[i]=&a[i];
	}
	for(i=0;i<Max;i++)
	{
		printf("value of a[%d]=%d\n",i,*p[i]);
	}
}
