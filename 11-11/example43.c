#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	struct emp
	{
	int empno;
	char name[20];
	float bs;
	float da;
	float hra;
	float dedn;
	float gs;
	float ns;
	};

int main()
{

	struct emp e;
	printf("enter the employee number, name, basic salary, deduction\n");
	scanf("%d%s%f%f",&e.empno,&e.name,&e.bs,&e.dedn);
	e.da=0.5*e.bs;
	e.hra=0.08*e.bs;
	e.gs=e.bs+e.da+e.hra;
	e.ns=e.gs-e.dedn;
	printf("employee number :%d\n",e.empno);
	printf("employee name:%s\n",e.name);
	printf("employee basic salary :%2f\n",e.bs);
	printf("employee allowance:%.2f\n",e.da);
	printf("employee house rent allowance:%.2f\n",e.hra);
	printf("employee goss salary :%.2f\n",e.hra);
	printf("employee deducation :%.2f\n",e.dedn);
	printf("employee net salary :%.2f\n",e.ns);
return 0;
}


