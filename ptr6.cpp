#include<stdio.h>
int show(int *x)
{
	printf("\n X in the Show Function = %d",*x);
}
int main()
{
	int x=10,y=20, *p;
	printf("\n X in Main Function = %d",x);
	p=&x;
	show(p);
	p=&y;
	show(p);
}
