#include<stdio.h>
struct emp{
	int empno;
	char name[10];
	int allowances,bspay,deductions,npay;
}e[10];
void main()
{
	int n;
	printf("enter the number of employees:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\n enter the employee number:");
		scanf("%d",&e[i].empno);
		printf("\n enetr the employee name:");
		scanf("%s",&e[i].name);
		printf("\n enter the basicpay, allowance & deduction:");
		scanf("%d %d %d %d", &e[i].bspay,&e[i].allowances,&e[i].deductions,&e[i].npay);
	}
	printf("employee.no \t name\t basicpay\t allowance\t deduction\t npay\n\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\t%d\t%d\t%d\n",e[i].empno,e[i].name,e[i].bspay,e[i].allowances,e[i].deductions,e[i].npay);
	}
}
