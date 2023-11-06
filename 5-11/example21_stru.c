#include<stdio.h>
void main()
{
	char name[2][10],x;
	int roll_no[2];
	float marks[2];
	for(int i=0;i<3;i++)
	{
		printf("enter the name, rollno & marks of students %d",i+1);
		scanf("%s %d %f",&name[i],&roll_no[i],&marks[i]);
		scanf("%c",&x);
	}
	printf("printing to students details\n");
	for(int i=0;i<3;i++)
	{
		printf("%s %d %f\n",name[i],roll_no[i],marks[i]);
	}
}

