#include<stdio.h>
#include<stdlib.h>
/*int main()   // putc
{
	FILE *fp;
	fp=fopen("file1.txt","w");
	fputc('a',fp);
	fclose(fp);
}
int main()  // getc function
{
	FILE *fp;
	char str;
	fp=fopen("exam46.c","r");
	while((str=fgetc(fp)!=EOF))
	{
	printf("%s",str);
	}
	fclose(fp);
}*/

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("file1.txt","w");
	fputs("hello c programing",fp);
	if(fp==NULL)
	{
		printf("error");
		return 0;
	}
	fclose(fp);
	printf("successfull written the characters");

}*/ 
int main()
{
	FILE *fp;
	char text[100];
	fp=fopen("file1.txt","r");
	printf("%s",fgets(text,200,fp));
	fclose(fp);
}

