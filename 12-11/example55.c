#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("exam46.txt","r+");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}


	fputs("gum",fp);
	fputc('z',fp);
	fclose(fp);
}
