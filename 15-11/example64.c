#include<stdio.h>
int main()
{
	char n[50];
	int a;
	int p;
	int d;
	char add[50];

	char na[50];
	int ag;
	int ph;
	int da;
	char addr[50];

	printf("Welcome to phone Book\n\n");

	printf("Menu\n");
	printf("press 1 to dd the contact\n");

	 int x;
	 printf("enter \n");
	 scanf("%d",&x);

	 if(x==1)
	 {
		 int y;
		 printf("enter the number of contact to be addaed:");
		 scanf("%d",&y);
		 if(y==1)
		 {
			 printf("------------------------------\n");
			 printf("name:");
			 scanf("%s",&n);
			 printf("phone number:");
			 scanf("%d",&p);
			 printf("address :");
			 scanf("%s",&add);
			 printf("----------------------------------\n");
		 }
		 else if (y==2)
		 {
			 printf("------------------------------\n");
                         printf("name:");
                         scanf("%s",&n);
                         printf("phone number:");
			 scanf("%d",&p);
                         printf("address :");
                         scanf("%s",&add);
                         printf("----------------------------------\n");

                         printf("------------------------------\n");
                         printf("name:");
                         scanf("%s",&na);
                         printf("phone number:");
                         scanf("%d",&ph);
                         printf("address :");
                         scanf("%s",&addr);
                         printf("----------------------------------\n");
                 }
                
		 printf("press 2 to see the enternted contact\n");
		 printf("press 3 to exit the phone book\n");
		  int z;
		 printf("Enter");
		 scanf("%d",&z);

		  if(z==2)
		  {
			  int num;
			  printf("Enter the number of contact to be viewed:");
			  scanf("%d",&num);
		
			  if (num==1)
			  {
		         	printf("------------------------------\n");
                         	printf("name:");
                         	printf("%s",n);
                       	  	printf("phone number:");
                         	printf("%s",p);
                         	printf("address:");
                         	printf("%s",add);
                         	printf("----------------------------------\n");
			  }
			  
			  else if (num==2)
			
 			  {
			
                         	printf("------------------------------\n");
                  	       	printf("name:");
                         	printf("%s",n);
                         	printf("phone number:");
                         	printf("%d",p);
                         	printf("address:");
                         	printf("%s",add);
                         	printf("----------------------------------\n");
  	
                                printf("------------------------------\n");
                         	printf("name:");
                         	printf("%s",na);
                         	printf("phone number");
                         	printf("%d",ph);
                         	printf("address :");
                         	printf("%s",addr);
                         	printf("----------------------------------\n");
                	 }
		  }
		else if(z==3)
		{
			printf("are you sure you want to close the phone book\n");
			printf("press 1 for yes\n");
			printf("press 2 for no\n");
			 
			int ans;
			printf("Enter \n");
			scanf("%d",&ans);
			
			if(ans==1)
			{
				printf("The phone has closed\n");
				printf("Have good day\n");
				
			}			
			else if(ans==2)
			{
				printf("the phone book ha not closed\n");
				printf("you can continue\n");
			}
		}
	 }
	 else
	 {
		 printf("In-valid");
	 }
	 return 0;
}
			 



