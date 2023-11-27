#include<stdio.h>
void print(struct emp*);
struct emp{
	char name[50];
	char doj[10];
	char desgination[10];
};
int main()
{
	struct emp e={"varun kumar","4-9-2023","team2"};
	print(&e);
}
void print(struct emp *ptr)
{
	printf("Name:%s\n",ptr->name);
	printf("date od joinig:%s\n",ptr->doj);
	printf("designation:%s\n",ptr->desgination);
}
