#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter the string:\n");
	scanf("%s",&str);
	printf("before coverting:%s\n",str);
	covert(str);
	printf("after coverting:%s\n\n",str);
}
void covert(char *str)
{
	while(*str!='\0')
	{
		*str=toupper(*str);
		str++;
	}
}
