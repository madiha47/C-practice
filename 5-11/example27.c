#include<stdio.h>
#include<string.h>

struct mystructure
{
	int mynum;
	char myletter;
	char mystring[50];
};
int main()
{
	struct mystructure s1={24,'B',"example of structure"};
	printf("%d %c %s\n",s1.mynum,s1.myletter,s1.mystring);
       	s1.mynum=24;
	s1.myletter='B';
	strcpy(s1.mystring,"modifying structure string");
	printf("my number is %d\n",s1.mynum);
	printf("my letter is %c\n",s1.myletter);
	printf("my string is %s\n",s1.mystring);
}

