#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100]="concatenated";
	char s2[100]="programing";
	char s3[100];
	int i=0,j=0;
	printf("\n 1st string is %s", s1);
	printf("\n 2nd string is %s",s2);
	while(s1[i]!='\0')
	{
		s3[j]=s1[i];
		i++;
		j++;
	}
	i=0;
	while(s2[i]!='\0')
	{
		s3[j]=s2[i];
		i++;
		j++;
	}
	s3[j]='\0';
	printf("\n concatenateed string : %s",s3);
}


