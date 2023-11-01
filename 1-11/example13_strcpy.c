#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[200];
	int i;
	printf("enter the string");
	gets(str1);
	for(i=0;str1[i]!=0;i++)
		str2[i]=str1[i];
		str2[i]=0;
		printf("string is :%s\n",str1);
		printf("string is :%s\n",str2);
}

