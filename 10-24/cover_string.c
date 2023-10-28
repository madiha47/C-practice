#include<stdio.h>
#include<string.h>
void convert(char *str)
{
	while(*str!='\0')
	{
		*str=toupper(*str);
		str++;
	}
}
int main()
{
	int i;
	char str[50];
	printf("enter the string:\n");
	scanf("%s",&str);
	printf("string before coverting is %s\n",str);
	convert(str);
	printf(" string after coverting is %s\n",str);
}
