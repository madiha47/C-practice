//c program to remove leading zero//
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="0000568";
	int i,j=-1;
	for(i=0;i<strlen(a);i++)
	{		if(a[i]!='0')
		{
			j=i;
		}
	}
for(i=j;i<strlen(a);i++)
{
	printf("%d\n",a[i]);
}
}

