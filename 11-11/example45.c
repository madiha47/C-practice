#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char str[50];
	fp=fopen("filename.text","w");
	if(fp==NULL)
	{
		printf("the doesnot exits\n");
			exit(1);
	}

	printf("enter the string",str);
	fscanf("%s",str);
	for(int i=0;i!=str;i++)
		putc(str[i],fp);
	fclose(fp);
		printf("the file is created suucefully\n");
	
}
