#include<stdio.h>

int main()
{
	char a[10]="key to success is hard work";
	int count;
	printf("the string");
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++)
	{
		count ++;
	}
	printf("%d",count);
	return 0;
}
