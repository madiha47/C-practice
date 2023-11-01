#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="stringcopy";
	char str2[20];
	strcpy(str2,str1);
	printf("the string1 is :%s\n",str1);
	printf("the string2 is :%s\n", str2);
	strcpy(str2,str1+1);
	printf("the string1 is :%s\n",str1);
	printf("the string is :%s\n", str2);
}
