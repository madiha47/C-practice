#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i, j,len;
	printf("enter a string:\n");
	scanf("%s",&s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>='A' && s[i]<='Z')
			s[i]=s[i]+32;
		if(s[i]>='a' && s[i]<='z')
			s[i]=s[i]-32;
	}
	printf("result of the string is %s",s);
}

