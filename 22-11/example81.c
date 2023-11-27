#include<stdio.h>
int Print(char name[],int,int,float);
struct student{
	char name[50];
	int age;
	int roll_no;
	float percentage;
};
int main()
{
	struct student s1={"yungi",17,77,73.5};
       Print(s1.name,s1.age,s1.roll_no,s1.percentage);
	return 0;
}
int Print(char name[50],int age, int roll_no, float percentage)
{
	printf("%s %d %d %f\n",name,age,roll_no,percentage);
}
