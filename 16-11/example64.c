// function with no arguement and no return value.

#include<stdio.h>
void value(void);

void main()
{ 
	value();
}

void value(void)
{
	float year=1,period=5,amount =5000,inrate=0.12;
	float sum;
	sum=amount;
	while(year<=period)
	{
		sum=sum*(1+inrate);
		year=year+1;
	}
	printf("the total amount is :%f", sum);
}

