#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i;
	printf("enter the string");
	scanf("%s",str);
	for(i=0;str[i]!=0;i++);
		printf("the length of the string is %d\n",i);
}
