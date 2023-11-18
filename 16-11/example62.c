/*#include<stdio.h>
int swap(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("\n %d\n %d\n", a,b);
}
int main()
{
	int x=10,y=50;
	swap(x,y);
	printf("%d\n %d",x,y);
	return 0;
}
*/


#include<stdio.h>
int main()
{
	int i=5;
	printf("%d%d%d",i++,i++,i++);
	return 0;

}
