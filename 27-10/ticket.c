#include<stdio.h>
int main()
{
	char name[20];
	int age, price=600;// price is implicity already
	printf("enter the name:\n");
	scanf("%s",&name);

	printf("enter your age:\n");
	scanf("%d",&age);
	if(age<6 || age>=60)
	{
		price=price*0.3;
		printf("your elligible for the concession!\n");
	}
	printf("your ticket is booked\n");
	printf("your ticket price is %d\n\n",price);
}

