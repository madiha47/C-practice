// Bank account system using file handling in C.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void checkbal(char *);
void transmoney(void);
void display(char*);
void person(char*);
void login(void);
void loginsu(void);
void account(void);
void accountcreat(void);
void afterlogin(void);
void logout(void);

void gotoxy(int x, int y)
{
	/*COORD c;
	c.X=x;
	c.Y=y;
	SetConsolecursorPosition(GetStdHandle(STD_OUTPUT_HANDLE).c);*/
}

struct pass{
	char username[50];
	int date,month,year;
	char pnumber[15];
	char adharnum[20];
	char fname[20];
	char lname[20];
	char fathername[20];
	char monthername[20];
	char address[100];
	char typeaccount[20];
};
 struct money{
	 char usernameto[50];
	 char userpersonfrom[50];
	 long int money1;
 };
struct userpass{
	char password[50];
};

int main()
{
	int i,a,b,choice;
	int passwordlength;
	gotoxy(20, 3);
	printf("Welcome to Bank Account System\n\n");
	gotoxy(18,5);
	printf("****************************");
	gotoxy(25, 7);
	printf("1..........Create a Bank Account");
	gotoxy(20, 10);
	printf("2..........Already A user? Sign in");
	gotoxy(20, 14);
	printf("3..........Exit\n\n");
	printf("\n\n Enter your choice..........");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		system("cls");
		printf("\n\n UserName 50 character Max!!");
		printf("\n\n Password 50 character Max!!");
		//account();
		break;
	case 2:
		login();
		break;
	case 3:
		exit(0);
		break;
	}
}
