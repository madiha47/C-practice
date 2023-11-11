#include<stdio.h>
int x;
void autoclass()
{
	printf("\n demonstracting auto class\n");
	auto int a=32;
	printf("value of variable 'a'"  "declared as auto :%d\n",a);
	printf("----------------------------------------------------------------\n");
}
void registerclass()
{
	printf("\n demonstracting register class\n");
	register char b='G';
	printf("value of variable 'b'" "declared as register %d\n",b);
	Printf("----------------------------------------------------------------\n");
}
void externclass()
{
	printf("\n demonstracting external class \n");
	extern int x;
	printf("value of  variable 'x'" "declared as external :%d\n",x);
	Printf("-----------------------------------------------------------\n");
}
void staticclass()
{
	int i=0;
	printf("\n demonstracting static class\n");
	printf("Declaring y as static inside the loop.\n"
			"but theis declaring will occur only " "once as 'y' is static\n"
			"if not, then every time teh value of 'y'" "will be declared value 5" "as in the case of variable 'p'\n");
	printf("\n Loop started:\n");
	for(i=0;i<5;i++)
	{
		static int y=5;
		y++;
		int p=10;
		p++;
		printf("\n the value of 'y'" "declared as static ,in %d\n",i,y);
		printf("\n the vlaue of non static variable 'p'" "in %d iternation %d\n",i,p);
	}
	printf("\n loop ended:\n");
	printf("----------------------------------------------------------------------\n");
}
int main()
{
	printf("a pg to demonstrate" "storage class in c\n\n");
	autoclass();
	registerclass();
	externclass();
	staticclass();
	printf("\n\n storage classes demonstrated\n");
}
