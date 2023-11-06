#include<stdio.h>
#include<string.h>
struct {
	char *name;
	int age;
	int salary;
}emp1,emp2;
int manger()
{
	struct{
		char*name;
		int age;
		int salary;
	}manger;
	manger.age=27;
	if(manger.age>30)
		manger.salary=65000;
	else 
		manger.salary=55000;
	return manger.salary;
}
int main()
{
	printf("enter the salary of employee 1:");
	scanf("%d",&emp1.salary);
	printf("enter the slary of employee 2:");
	scanf("%d",&emp2.salary);
	printf("employee salary is %d\n",emp1.salary);
	printf("employee salary is %d\n",emp2.salary);
	printf("managers salary is %d\n",manger());
}

