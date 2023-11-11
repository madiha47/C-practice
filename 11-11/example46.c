#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char info[50]="File handling in c programing";
	fp=fopen("exam46.c","w");
	if(fp==NULL)
	{
		printf("exam46.c file failed to open");
		exit(1);
	}
	printf("the file is now opened\n");
	if(strlen(info)>0)
	{
		fputs(info,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	printf("data successfully written i file","exam46.c\n");
}

