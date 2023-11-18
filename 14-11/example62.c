#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n;
	int m;
	int a;
	int exit;
	int exi;

	printf("welcome to Medern periodic table\n\n");
	
	printf("> Enter 1 to know about an element\n\n");
	printf("> Enter 2 to close the periodic table\n\n");
	
	printf("enter \n");
	scanf("%d",&n);

	if(n==1)
	{
		printf("> press 3 to search th eelement by atomic number\n\n");

		printf("enter \n");
		scanf("%d",&m);

		if(m==3)
		{
			printf("enter the atomic number of the element to be searched:");
			scanf("%d",&a);

			if(a==1)
			{
				printf("name: Hydrogen\n");
				printf("Symbol : H\n");
				printf("Atomic Number :1\n");
				printf("Electroic configuration:1s^1\n");
				printf("Discovered by: Henny cavendish\n");
				printf("charge :+1\n");
			}
		}
	}
	else if(n==2)
	{
		printf(" Do you want to exit (yes/No)\n");
		printf("> press 6 for yes\n");
		printf("> press 7 for No\n");

		printf("enter\n");
		scanf("%d",&exit);

		if(exit==6)
		  {
			printf("are you sure, you want to close the periodic tabel? (yes/No)\n");
			printf("> press 4 for yes\n");
			printf("> press 5 for no\n");

			printf("enter\n");
			scanf("%d\n",&exit);

			if(exi==4)
			{
				printf("the periodic table has closed");
			}
			else if(exi==5)
			  {
				printf("periodic table has not closed and you can continue to learn more about elements\n\n");
				
				printf("enter the atomic number of the ekements to be searched:\n\n");
				scanf("%d",&a);
					
					if(a==3)
					{
				             printf("name: Hydrogen\n");
                                             printf("Symbol : H\n");
                                             printf("Atomic Number :1\n");
                                             printf("Electroic configuration:1s^1\n");
                                             printf("Discovered by :Henny cavendish\n");
				             printf("charge :+1\n");
			}
		}
	}
		else if(exit==7)
		{
			printf("periodic table has not closed and you can continue to learn more about the elements\n");

			printf("enter the atomic number of the element to be searched:");
			scanf("%d",&a);

			if(a==2)
			{
				printf("name: Hydrogen\n");
                                printf("Symbol : H\n");
                                printf("Atomic Number :1\n");
                                printf("Electroic configuration:1s^1\n");
                                printf("Discovered by: Henny cavendish\n");
                                printf("charge :+1\n");
			}
		}

	}

}

