#include<stdio.h>
struct names
{
	char state[10];
	int engi,medical,mangament,university,total;
};
int main()
{
	int n,i,max=0;
	printf("enter the number of states to accept:");
	scanf("%d",&n);
	struct names arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter the name of state number %d:",i+1);
		scanf("%s",&arr[i].state);
		printf("enter the number of engineering colleges:");
		scanf("%d",&arr[i].engi);
		printf("enter the number of medical colleges:");
		scanf("%d",&arr[i].medical);
		printf("enter the number of manganemt colleges:");
		scanf("%d",&arr[i].mangament);
		printf("enter the number of universities:");
		scanf("%d",&arr[i].university);
		arr[i].total=arr[i].engi + arr[i].medical + arr[i].mangament + arr[i].university;
		if(arr[i].total>arr[max].total)
			max=1;
	}
	printf("SI no.\t state\t engineering\t Medical\t magnament\t University\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t %s\t %d \t %d \t %d \t %d \n",i+1,
				arr[i].state,arr[i].engi,arr[i].medical,arr[i].mangament,arr[i].university);
	}
	printf("the state with maximum number of college is %s\n",arr[max].state);
}
