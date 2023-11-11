#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*int main()
{
	FILE *fp;
	char str[50];
	fp=fopen("exam46.c","r");
	if(fp==NULL)
	{
		printf("error");
		exit (0);
	}

	while(fgets(str,50,fp))
	{
		printf("%s",str);
	}
	fclose(fp);
	//	printf("data successufully read from file exam.c\n");
	//printf("te file is now closed");

return 0;
}*/
void main()
{
	FILE *fp=NULL;
	char str[50];
	fp=fopen("exam46.c","r");
	if(fp==NULL)
	{
		printf("error");
		exit(0);
	}
	//ch=fgetc(fp);
	while(!feof(fp))
	fgets(str,10,fp);
	//printf("%c\n",ch);
	fclose(fp);
}

