#include<stdio.h>
int main()
{
	int i,n,num,rem,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	
	printf("perfect number series: between 1 to %d\n",n);
	

	for(n=1;n<=num;n++)
	{
		sum=0;
		for(i=1;i<n;i++)
		{
			rem=num%i;
			if(rem==0)
				sum=sum+i;
		}
		if(sum==n)
		{
			printf("%d \n",num);
		}
	}
	printf("-------------------------------------------\n");
	return 0;
}
