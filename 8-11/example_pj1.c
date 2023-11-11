#include<stdio.h>
#include<math.h>
#include<time.h>
int game(char you, char comp)
{
	if(you==comp)
		return -1;
	if(you=='s' && comp=='p')
		return 0;
	if(you=='p' && comp=='s')
		return 1;
	if(you=='s' && comp=='z')
		return 1;
	if(you=='z' && comp=='s')
		return 0;
	if(you=='p' && comp=='z')
		return 0;
	if(you=='z' && comp=='p')
		return 1;
}
int main()
{
	int n;
	char you, comp,result;
	srand(time(NULL));
	n=rand()%100;
	if(n<33)
		comp='s';
	if(n>33 && n<66)
		comp='p';
		else
		comp='z';
		printf("\n\t\t\t\t Enter s for stone, p for papper and z for scissor\n\t\t");
		scanf("%c",&you);

		result=game(you,comp);
		if(result==-1)
		{
			printf("\n\t\t Game draw!\t\t\n");
		}
		else if(result==1)
		{
			printf("\n\t\t wow! you have won the game!\t\t\n");
		}
		else
		{
			printf("\n\t\t\t toh! you lost the game!\t\t\n");
		}
		printf("\n\t\t you choice %c & computer choose :%c\n",you,comp);
}


