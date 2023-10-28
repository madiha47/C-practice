#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,x;
	//x=(a+b)*c/d*(e-f); // decalring expersion before a values define give the wrong value 
	printf("enter the value of a:\n");
	scanf("%d",&a);

	printf("enter the value of b:\n");
	scanf("%d",&b);

	printf("enter the value of c:\n");
	scanf("%d",&c);
	
	printf("the value of d:\n");
	scanf("%d",&d);

	printf("the value of e:\n");
	scanf("%d",&e);

	printf("the value of f:\n");
	scanf("%d",&f);
	x=(a+b)*c/d*(e-f);

	printf("value of x=(a+b)c/d(e-f)=%d\n",x);
}
