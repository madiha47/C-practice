#include<stdio.h>
int main()
{
	int *ptr[3];
	int x=10,y=20,z=30;
	int i;
	ptr[0]=&x;
	ptr[1]=&y;
	ptr[2]=&z;
	for(i=0;i<3;i++)
	{
		printf("value of %d=%d, address is %u\t\n",i,*(ptr[i]),ptr[i]);
	}
}	
