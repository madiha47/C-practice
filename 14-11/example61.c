#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char name[20];
	int roll_no;
	char branch[50];
};
int main()
{
	struct student obj;
	
	strcpy(obj.name, "kamla");
	strcpy(obj.roll_no=78);
	strcpy(obj.branch,"computer science");
	
	printf("Name: %s\n",obj.name);
	printf("roll_no :%d\n",obj.roll_no);
	printf("branch :%s\n",obj.branch);
}

