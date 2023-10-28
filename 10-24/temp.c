#include<stdio.h>
void swap(int numb1,int numb2)
{
	int temp;
	temp=numb1;
	numb1=numb2;
	numb2=temp;
	printf("after the swapping :%d %d\n",numb1,numb2);
}




int main()
{
	int num1,num2;
	printf("enter the 1st number\n");
	scanf("%d",&num1);
	printf("enter the 2nd number\n");
       scanf("%d",&num2);
	swap(num1,num2);
 	printf("the values before swapping are: %d %d\n",num1,num2);
return 0;
}
