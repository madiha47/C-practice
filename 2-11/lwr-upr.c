#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i,len;
	printf("enter a string :\n");
	scanf("%s",&ch);
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		if(ch[i]>='A' && ch[i]<='Z')
			ch[i]=ch[i]+32;
		else if(ch[i]>='a' && ch[i]<='z')
		       ch[i]=ch[i]-32;
	}
	printf("the string is : %s",ch);
}	
