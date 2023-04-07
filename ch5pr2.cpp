#include<stdio.h>
int main()
{
	int x,y;
	printf("\n Enter X and Y=");
	scanf("%d%d",&x,&y);
	printf("\n X=%d \t Y=%d",x,y);
	
	(x<y) ?  printf("\n X is small") : printf("\n Y is small");
	return 0;
}
