 #include<stdio.h>
int main()
{
	int x;
	char y;
	printf("enter your Gender F for female and M for Male:\n");
	scanf("%s",&y);
	printf("\n enter your age:");
	scanf("%d",&x);
	if(y=='M'|| y=='m')
	{
		if (x<=25)
		{
			printf("\n your Boy\n");
		}
		else
		{
			printf("\n your Man\n");
		}
	}
	else if (y=='F' || y=='f')
	{
		if (x<=20)
		{
			printf("\n your a girl \n");
		}
		else 
		{
			printf("\n your woman \n");
		}
	}
	
}

