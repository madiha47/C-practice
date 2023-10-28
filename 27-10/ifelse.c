#include<stdio.h>
int main()
{
	int height, weight, h,BMI;
	printf("enter the your height:");
	scanf("%d",&height);
	printf("enter your weight:");
	scanf("%d",&weight);
	h=height/100;
	BMI=weight/h;

	if(BMI < 15)
	{
	printf("\n Starvation\n");
	}
	else if (BMI>=15.5 && BMI<=17)
	{
		printf("\n Anorexic\n");
	}
	else if (BMI >=17.5 && BMI<=19)
	{
		printf("\n under weigt\n");
	}
	else if (BMI>=19.2 && BMI <=24.5)
	{
		printf("\n Ideal \n");
	}
	else if (BMI >=25 && BMI<30)
	{
		printf("\n overweight\n");
	}
	else if(BMI>=30 && BMI<=39.9)
	{
		printf("\n obese\n");
	}
	else 
		printf("\n Morbidly obese\n");
}

