#include<stdio.h>
struct car{
	int fuel ;
	int seat;
	float mileage;
};
int main()
{
	struct car c[2];
	for(int i=0;i<2;i++)
	{
		printf("enter the car %d fuel tank capacity:",i+1);
		scanf("%d",&c[i].fuel);
		printf("enter the car %d seat capacity:",i+1);
		scanf("%d",&c[i].seat);
		printf("enter the car %d mileage capacity:",i+1);
		scanf("%f",&c[i].mileage);
	}
	printf("\n");
	for(int i=0;i<2;i++)
	{
		printf("\n car %d details :\n",i+1);
		printf("fuel tank capacity :%d\n",c[i].fuel);
		printf("seating capacity :%d\n",c[i].seat);
		printf("city mileage: %d\n",c[i].mileage);
	}
}

