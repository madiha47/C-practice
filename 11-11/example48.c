#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *fp;
	int id;
	char name[30];
	float salary;
	fp=fopen("emp.txt","w+");
	if(fp==NULL)
	{
		printf("File does not exists\n");
		return;
	}
	printf("enter the id\n");
	scanf("%d",&id);
	fprintf(fp,"id=%d\n",id);
	printf("enter the name\n");
	scanf("%s",&name);
	fprintf(fp,"name=%s\n",name);
	printf("enter the salary\n");
	scanf("%f",&salary);
	fprintf(fp,"salary=%f\n",salary);
	fclose(fp);
}

