#include<stdio.h>
#include<math.h>
int sum(int x ,int y)
{ 
	int sum;
	sum=x+y;
	return x+y;
}

int main()
{
	int x=10,y=11;
	int result=sum(x,y);
	printf("Sum of %d and %d = %d",x,y,result);
	return 0;
}
