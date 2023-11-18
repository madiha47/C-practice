#include<stdio.h>
#include<math.h>
int sum();

int main()
{
	int num;
	num=sum();
	printf("sum of two given values =%d",num);
	return 0;
	
}
 int sum()
{
	int a=50,b=80,sum;
	sum=sqrt(a)+sqrt(b);
	return sum;
}

