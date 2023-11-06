 #include<stdio.h>
#include<string.h>
struct car
{
	char model[50];
	char brand[50];
	int year;
};
int main()
{
	struct car c1={"maruti suzuki","alto k10",2018};
	struct car c2={"Tata","nexon",2016};
	struct car c3={"madindra","Bolero",2020};
	printf("%s %s %d\n",c1.model,c1.brand,c1.year);
	printf("%s %s %d\n",c2.model,c2.brand,c2.year);
	printf("%s %s %d\n",c3.model,c3.brand,c3.year);
}
