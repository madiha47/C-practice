#include<stdio.h>
struct store
{
	double price;
	union{
		struct{
			char *title;
			char *author;
			int num_pg;
		}book;

		struct{
			int color;
			int size;
			char *design;
		}shirt;
	}item;
};
int main()
{
	struct store s;
	s.item.book.title="c programming";
	s.item.book.author="John";
	s.item.book.num_pg=189;
	printf("Size is %ld",sizeof(s));
}
