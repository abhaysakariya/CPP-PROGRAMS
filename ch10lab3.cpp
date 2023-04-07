#include<stdio.h>
int main()
{
	int a,b,t;
	printf("\n Enter A , B: ");
	scanf("%d%d",&a,&b);
	printf("\n\n ORIGINAL VALUES \n\n A=%d \t B=%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\n\n SWAPPED VALUES \n\n A=%d \t B=%d",a,b);
	return 0;
}
