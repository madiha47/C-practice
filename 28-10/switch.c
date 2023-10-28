#include<stdio.h>
int main()
{
	int a, b,c , opt;
	float e;
	char z;

	z='y';

	printf("enter values a and b\n");
	scanf("%d%d", &a, &b);

	do
	{
	printf("addition 1:\n");
	printf("substraction 2:\n");
	printf("multiplication 3:\n");
	printf("division 4:\n");
	printf("modules 5:\n");
	printf("\n choose your option :\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			c=a+b;
			printf("result is= %d",c);
			break;
			
		case 2:
			c=b-a;
			printf("result is =%d",c);
			break;

		case 3:
			c=a*b;
			printf("result is = %d",c);
			break;
		case 4:
			e=a/b;
			printf("result is = %d",e);
			break;
	
		case 5:
			c=a%b;
			printf("result is = %d",c);
			break;

			defalut:
			printf("wrong opition");
			

	}

	printf("\ndo you want to continue (y/n)\n");
	scanf(" %c",&z);

	}while (z=='y');

	//switch(opt);
	
	return 0;
}

