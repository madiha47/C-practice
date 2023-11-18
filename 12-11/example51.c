#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,n,a[10][10];
	printf("enter the order of matrix\n");
	scanf("%d",&n);
	printf("enter the elements of matrix\n");
	for(i=0;i<n;i++){

		for(j=1;j<n;j++)

			scanf("%d",&a[i][j]);
		
	printf("the given matrix is:");
		scanf("%d\t",a[i][j]);
	printf("\n");
	}
	printf("the transpace of the given of given matrix is :\n");
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=n;i++);
		printf("%d\t",a[i][j]);
		printf("\n");
	}
}
