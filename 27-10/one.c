#include<stdio.h>
int main()
{
	char name[20],regno[20],place[20],gender[5];
	int age;
	printf("enter your regno:\n");
	scanf("%s",&regno);
	printf("enter your name:\n");
	scanf("%s",&name);
	printf("enter your age:\n");
	scanf("%d",&age);
	printf("enter your place:\n");
	scanf("%s",&place);
	printf("enter your gender:\n");
	scanf("%s",&gender);
	printf("Name:\t regno\t age\t place\t gender\t\n");
	printf("%s\t %s\t %d\t %s\t %s\n",name, regno,age,place,gender);

}
