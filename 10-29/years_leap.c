 #include<stdio.h>
int main()
{
	int syear, eyear, i;
	printf("enter a year to start searching the leap year:");
	scanf("%d", &syear);
	printf("enter a year to end the search of leap year:");
	scanf("%d", &eyear);
	printf("leap year between %d to %d are:\n", syear, eyear);
	for(i=syear;i<=eyear;i++)
	{
		if(((i%4==0)&&(i%100[:!=0))||(i%400==0))
		{
			printf("%d \n",i);
		}
	}
}

