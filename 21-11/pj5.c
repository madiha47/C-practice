#include<stdio.h>
//#include<conio.h>
//#include<windows.h>
#include<string.h>
#define ENTER 13
#define Tab 9
#define BCKSPC 8
struct user{
		char fullname[50];
		char email[50];
		char password[50];
		char username[50];
		char phone[50];
	    };

void takeinput(char ch[50]){
	fgets(ch,50,stdin);
	ch[strlen(ch)-1]=0;
}

void generateusername(char email[50],char username[50]){
	//gushsama@gmail.com
	for(int i=0;i<strlen(email);i++)
	{
		if(email[i]= '@') break;
		else username[i]=email[i];
	}
}
void takepassword(char pwd[50]){
	int i;
	char ch;
	while(1){
		ch=getch();
		if (ch==ENTER|| ch==Tab)
		{
			pwd[i]='\0';
			break;
		}
		else if(ch==BCKSPC)
		{
		if(i>0){
			i--;
			printf("\b\b");//abc
	         	}	
		}
	else{
		pwd[i++]=ch;
	        printf("* \b");
	}
   }
}




int main()
{
	int opt;
	struct user user;
	char password2[50];
	FILE *fp;
	// system("color 0b");
	printf("\n\t\t.......WELCOME TO Authentication system-------");
	printf("\n please choose your operation");
	printf("\n 1.signup");
	printf("\n 2.login");
	printf("\n 3.Exit");

	printf("\n\n your choice\t");
	scanf("%d",&opt);
	fgetc(stdin);

	switch(opt){
		case 1:
			printf("\n Enter your full name:\t");
			takeinput(user.fullname);
			printf("\n Enter your email:\t");
			takeinput(user.email);
			printf(" Enter your contact no:\t");
			takeinput(user.phone);
			printf("Enter your password:\t");
			takeinput(user.password);
			printf("%s",user.password);

			if(!strcmp(user.password,password2)){
				generateusername(user.email,user.username);
				//printf("\n your username is %s",user.username);
				fp=fopen("Users.dat","a+");
				fwrite(&user,sizeof(struct user),1,fp);
				if(fwrite!=0)
					printf("\n user registion success, your user name is %s", user.username);
				else printf("\n sorry something want wrong :");
			}
			else{
				printf("\n password donot matched");
				beep(750,300);

			}
			break;

	case 2:
			char username[50],pword[50];
			struct user usr;

			printf("\n Enter your username:\t");
			takeinput(username);
			printf("\n Enter your password:\t");
			takeinput(pword);

			fp=fopen("Users.dat","r");
			while(fread(&usr,sizeof(struct user),1,fp))
			{
				if(!strcmp(usr.username,username)){
					if(!strcmp(usr.password,pword)){

					}
					else{
					}
				}	
			}			
	}
	return 0;
}


