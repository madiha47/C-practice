/*#include<stdio.h>
#include<goto.c>
#define HLINE for(i=0;i<79;i++)\
		    printf("%c",196);
#define VLINE(x,y){\
			gotoxy(x,y);\
			printf("%c",179);\
			}
int main()
{
	int i,y;
	gotoxy(1,12);
	HLINE;
		for(y=1;y<25;y++)
			VLINE(39,y);
}*/





#include<stdio.h>
int main()
{
	int i=2;
#ifdef DEF
	i*=i;
#else
	printf("\n %d",i);
#endif
}
