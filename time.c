#include<stdio.h>
#include<math.h>
int time(int);
int main()
{
	int sec;
	printf("enter the time in seconds:");
	scanf("%d",&sec);
	time(sec);
}
int time (int sec)
{
	int hh,ss,mm;
	hh=s/3600;
	mm=(sec-hh*3600)/60;
	ss=sec-hh*3600-mm*60;
	printf("%d seconds =%d hours:%d minutes:%d seconds\n",sec,hh,mm,ss);
//	printf("Time is :%d:%d:%d\n",hh,mm,ss);//
	}
