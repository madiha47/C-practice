#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="pratical Record Book of physics";
	int len1,len2;
	len1=strlen(name);
	len2=strlen("pratical Record Book of physics");
	printf("the string length of %s is %d\n", name,len1);
	printf("the string length of %s is %d\n", "pratical Record Book of physics",len2);
}

