#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char str[5];
	fp=fopen("filename.text","w");
	if(fp==NULL)
	{
		printf("the doesnot exits\n");
			exit(1);
	}
	for(i=0;i!=strlen;i++)
	printf("enter the string",str);
	fscanf("%s",&str);
		fputs(str,fp);
	fclose(fp);
		printf("the file is created suucefully\n");
	
}
