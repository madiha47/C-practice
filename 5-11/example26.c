#include<stdio.h>
struct mystructure
{
	int mynum;
	char myletter;
	char mystring[50];
};
int main()
{
	struct mystructure s1= {13,'g',"example of structure type"};
	printf("%d %c %s\n",s1.mynum,s1.myletter,s1.mystring);
}

