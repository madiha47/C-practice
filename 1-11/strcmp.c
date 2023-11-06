#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="you";
	char str2[]="you";
	int i,j,k;
	i=strcmp(str1,str2);
	j=strcmp(str2,"welcome");
	k=strcmp(str2,"welcome");
	printf("%5d%5d%5d\n",i,j,k);
}

	
