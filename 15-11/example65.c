/*#include<stdio.h>
#include<math.h>
void main()
{
	double n=64;
	double squareroot=sqrt(n);
	printf("the square root of %lf=%.2lf",n,squareroot);

}*/

// pass by value
/*
#include<stdio.h>
 void swap( int var1, int var2)
{
	int temp=var1;
	var1=var2;
	var2=temp;
}

int main()
{
	int var1=3, var2=2;
	printf("Before var1 and var2: %d and %d\n",var1,var2);
	swap(var1,var2);
	printf("after var1 and var2:%d and %d\n",var1,var1);
	return 0;
}
*/


//call by referance
#include<stdio.h>
void swap( int *var1, int *var2)
{
	int temp=*var1;
	*var1=*var2;
	*var2=temp;
}
int main()
{
	int var1=3,var2=2;
	printf("Before var1 and var2: %d and %d\n",var1,var2);
        swap(&var1,&var2);
        printf("after var1 and var2:%d and %d\n",var1,var2);
        return 0;
}
