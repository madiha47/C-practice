#include<stdio.h>

struct emp_details{
	int emp_no;
	char name[20];
	int basic_salary;
};



void main()
{
	
	char ch ;
	struct emp_details obj1 ;
	FILE *fp;
	fp=fopen("empdata","r+");
	printf("enter the employee number,name, basic salary\n");
	do{
		scanf("%d%s%d",&obj1.emp_no,&obj1.name[0],&obj1.basic_salary);
		fwrite(&obj1,sizeof(obj1),1,fp);
		printf("\n do you want to continue Y/N \n");
		getchar();
		ch=getchar();
	}
	while(ch=='y'||ch=='Y');
	


	rewind(fp);

	if(fp==NULL)
	{
		printf("error opening file");
		exit(1);
	}
	else
	{
		
		struct emp_details obj2;
		do
		{	
		fread(&obj2, sizeof(obj2), 1, fp);
		fseek(fp, 0, SEEK_CUR);
		printf("%d\t %s\t %d\t\n",obj2.emp_no,obj2.name,obj2.basic_salary);
		}while(fp!=NULL);
	        fclose(fp);
		
	}	
	getchar();

}
			
