#include<stdio.h>
#include<string.h>
typedef struct students
{
	char name[50];
	char branch[50];
	int Id
}stu;
int main()
{
	stu st;
	strcpy(st.name,"kalpana");
	strcpy(st.branch,"computer Science and Engineering");
	st.Id=108;
	printf("name:%s\n",st.name);
	printf("Branch:%s\n",st.branch);
	printf("Id :%d\n",st.Id);
}



