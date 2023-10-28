#include<stdio.h>



int main()
{



	int multi_d_array[4][3];


	for(int i=0; i<4; i++)
	{

		int j=0;j<3; j++)
		{

			multi_d_array[i][j] = i+2;
		}
	}

	for(int i=0; i<4; i++)
	{

		for(int j=0;j<3; j++)
		{

			printf(" multi_d_array[%d] [%d] : %d ",i,j,multi_d_array[i][j]);
		}
		printf("\n");
	}


	return 0;
}


