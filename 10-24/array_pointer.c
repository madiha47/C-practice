#include<stdio.h>




int main()
{


	int *ptr;
	int array[10] = {1,2,3,4,5,6,7,8,9,10};



	for(int i=0; i<10;i++)
	{
		printf("value of array[%d] : %d\n",i, array[i]);

		printf("address of array[%d] : %u\n",i, &array[i]);


	}




	ptr = &array[0];

	printf(" ptr  address :%u and value %d \n", ptr, *ptr);

	ptr++;

	printf(" ptr dress :%u and value %d \n", ptr, *ptr);

	ptr=ptr+2;
printf("ptr address: %u and value %d\n",ptr,*ptr);
	ptr=ptr+3;
	printf("ptr address:%u and value %d\n",ptr,*ptr);
	ptr=ptr+4;
	printf("ptr address :%u and value %d\n",ptr,*ptr);


	
	
	
	return 0;
}
