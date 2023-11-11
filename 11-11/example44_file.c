#include<stdio.h>
void main()
{
	int eno,bs;
	char name[20],ch;
	FILE *fp;
	fp=fopen("empdata","w");
	printf("enter the employee number,name, basic salary\n");
	do{
		scanf("%d%s%d",&eno,&name,&bs);
		printf("fp","%d\n%s\n%d\n",eno,name,bs);
		printf("do you want to continue Y/N");
		ch=getch();
	}
	while(ch=='y'||ch=='Y');
	fclose(fp);
	fp=fopen("emp.dat","r");
	if(fp==NULL)
	{
		printf("error opening file");
		exit(1);
	}
	else
	{
		printf("enter employee no,name,basic\n");
		while(fscanf(fp,"%d%s%d",eno,name,bs)!=EOF);
		printf("%d\t %s\t %d\t\n",eno,name,bs);
	        fclose(fp);
	}	
	getch();

}
			
