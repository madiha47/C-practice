#include<stdio.h>
#include<string.h>
int main()
{
	char s[15]="iniatialze";
	char ch='s';
	     printf("Original string is: %s\n",s);
	printf("character to be appended:%c\n",ch);
	strncat(s,&ch,1);
	printf("'appended string :%s\n",s);
}

