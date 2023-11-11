#include<stdio.h>
int main()
{
	int i;
	int ans1,ans2,ans3,ans4,ans5;
	int point1,point2,point3,point4,point5,point6,point7,point8,point9point10;
	int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
	int total1,total2,total3;
	printf("            Welcome to the Game\n\n");

	printf("> press 7 to start the game\n");
	printf("> press 0 to quit the game\n");
	scanf("%d",&i);
	if(i==7)
	{
		printf("the game has started\n\n");
	}
	else if(i==0)
	{
		printf("the gamehas ended\n\n");
	}
	else
	{
		printf("Invalid \n\n");
	}
	if(i==7)
	{
		printf("1) which one is the first search engine is internet?\n\n");
		printf("1)google\n");
		printf("2)archie\n");
		printf("3)wais\n");
		printf("4)altaviste\n");
		
		printf("Enter your Answer:");
		scanf("%d",&ans1);
		if(ans1==2)
		{
			printf("correct Answer\n");
			point1=5;
			printf("you  have scored %d point\n",point1);
		}
		else
		{
			printf("wrong asnwer\n");
			point01=0;
			printf("you have scored %d point\n",point01);
		}
		printf("2) which one is teh first web brower invented in 1990?\n");
		printf("1) Internet Explorer\n");
		printf("2) Mosaic\n");
		printf("3) Mozilla\n");
		printf("4) nexus\n");

		printf("enter your answer:");
		scanf("%d",&ans2);
		if(ans2==4)
		{
			printf("coorect answer\n");
			point2=5;
			printf("you have scored %d point\n",point2);
		}
		else
		{
			printf("wrong answer\n");
			point02=0;
			printf("you have scored %d point\n", point02);
		}
		printf("3) first computer virus is known as?\n\n");
		printf("1) Rabbit\n");
		printf("2) creeeper virus\n");
		printf("3) Elk cloner\n");
		printf("4) SCA virus\n");
		printf(" enter your answer:\n");
		scanf("%d",&ans3);
		if(ans3==2)
		{
			printf("correct answer\n");
			point3=5;
			printf("you have scaored%d point \n",point3);
		}
		else
		{
			printf("wrong asnwer\n");
			point03=0;
			printf("you have scaored %d point \n",point03);
		}
		printf("4) Firewell is computer is used for?\n\n");
		printf("1) security");
		printf("2) date transmission\n");
		printf("3) Maoniter\n");
		printf("4) authentication\n");
		 printf("enter your answer \n");
		 printf("%d",&ans4);
		 if(ans4==1)
		 {
			 printf("coorrect answer\n");
			 point4=5;
			 printf("you have scored %d point\n",point4);
		 }
		 else
		 {
			 printf("wrong answer\n");
			 point04=0;
			 printf("you have scored %d point \n",point04);
		 }
		 printf("5) which of the following is not a database mangement software?\n\n");
		 printf("1) Mysql\n");
		 printf("2) oracle\n");
		 printf("3) cobal\n");
		 printf("4) sybase\n");
		 printf("enter your answer\n");
		 printf("%d",&ans5);
		 if(ans5==3)
		 {
			 printf("correct answer\n");
			 point5=5;
			 printf("you have scored %d point\n",point5);
		 }
		 else
		 {
			 printf("wrong answer\n");
			 point05=0;
			 printf("you have scaored %d point \n",point05);
		 }
		 
	}
	return 0;
}




