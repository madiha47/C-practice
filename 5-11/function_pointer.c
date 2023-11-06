#include<stdio.h>
# define ops 4
float sum(float a,float b){return (a+b);}
float sub(float a,float b){return (a-b);}
float multi(float a,float b){return (a*b);}
float divi(float a,float b){return (a/b);}
int main()
{
	float(*ptr2func[ops])(float, float) = {sum,sub,multi,divi};
			int choice;
			float a,b;
			printf("enter your choice: 0 for sum, 1 for sub, 2 for multi, 3 for divi\n");
			scanf("%d",&choice);
			printf("enter 2 number:\n");
			scanf("%f %f ",&a, &b);
			printf("%f", ptr2func[choice](a,b));
}
