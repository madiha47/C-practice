#include<stdio.h>
#include<stdlib.h>
int main()
{
	int h,m,s;
	double i;

	printf("enter current time :");
	scanf("%d%d%d\n",&h,&m,&s);
start:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				printf("\n\t\t %d: %d: %d\n",h,m,s);
				if(h<12)
					printf("AM");
				else
					printf("PM");
			
			        for(i=1;i<500000;i++)
				i++;
				i--;
			}
			s=0;
		}
		m=0;
	}
	h=0;
goto start;
}

				
