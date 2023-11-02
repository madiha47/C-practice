#include<stdio.h>
#include<string.h>
void main()
{
	char name1[50]="stringlength";
	char name2[50]="stringcopy";
	char name3[50]="stringcomparision";
	char name4[50];
	int len ,comp;
	len=strlen(name3);
	printf("the length of the string is :%d",len);
	printf("copy of the sring is ");
	stcpy(name4, name1);
	printf("%s",&name4);
	printf("comparision of string is :");
	comp=strcmp(name2,name3);
	printf("%d",comp);
	printf("concatate of the string is :");
	strcat(name2, name1);
	printf("%s\n\n",&name1);
}


