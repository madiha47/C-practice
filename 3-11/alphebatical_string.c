#include<stdio.h>
#include<string.h>
void main()
{
	int n,i,j;
	char str[5][20],t[20];
	printf("enter the size of string:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(t,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],t);
			}

		}
	}
	printf("\n the string in alphebatical order is:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",str[i]);
	}
}


