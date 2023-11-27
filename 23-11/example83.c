#include<stdio.h>
int main()
{
	 int n, i,curr=0,prev=1,next;
	 printf("enter the number");
	 scanf("%d",&n);
	 next=curr+prev;
	 printf("%d",curr,prev);
	 for(i=2;i<n;i++)
	 {
		 printf("%d",next);
		 curr=prev;
		 prev=next;
		 next=curr+prev;
	 }
	 return 0;
}

