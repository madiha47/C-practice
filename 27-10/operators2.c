#include<stdio.h>
int main()
{
	float height,weight,BMI,h;
	printf("enter your height is cm:\n");
	scanf("%f",&height);
	printf("enter your weight is kg:\n");
	scanf("%f",&weight);
	h=height/100*height/100;
	BMI=weight/h;
	printf("your BMI is %f=\n",BMI);
}

