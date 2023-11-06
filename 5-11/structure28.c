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
	struct mystructure s1={13,'G',"example of structure type"};
       	printf("%d %c %s\n",s1.mynum, s1.myletter, s1.mystring);
	struct mystructure s2;
	s1=s2;
	s2.mynum=30;
	s2.myletter='B';
	strcpy(s2.mystring,"using another variable s2");
		printf("%d %c %s\n",s2.mynum, s2.myletter, s2.mystring);
}

