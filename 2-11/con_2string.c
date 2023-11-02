#include<stdio.h>
#include<string.h>
int main()
{
	char str1[25],str2[25];
	int i=0,j=0;
	printf("\n enter 1st string");
	scanf("%s",str1);
	printf("\n enter 2nd string");
	scanf("%s",str2);
	while(str1[i]!='\0')
		i++;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i]='\0';
	printf("string is %s",str1);
}

