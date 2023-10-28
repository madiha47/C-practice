#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	printf("enter the string:");
	gets(s);
	stringcount(s);
}

void stringcount(char*s)
{
	int vowels=0; consts=0,i;
	for(i=0;s[i];i++)
	{
		if ((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
		{
			if(s[i]=='a'||s[i]=='e' || s[i]=='i'|| s[i]=='o' ||s[i]=='u')
				vowels++;
			else
				consts++;
		}
	}
	printf("vowels =%d\n", vowels);
	printf("consts= %d\n",consts);
}

