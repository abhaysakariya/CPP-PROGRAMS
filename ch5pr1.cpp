#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter A=");
	scanf("%d",&a);
	printf("\n A=%d",a);
	
	printf("\n\n******************************\n\n");
	printf("\n A+=10  =  %d",a+=10);
	printf("\n A-=10  =  %d",a-=10);
	printf("\n A*=10  =  %d",a*=10);
	printf("\n A/=10  =  %d",a/=10);
	printf("\n A<<=10  =  %d",a<<=10);
	printf("\n A>>=10  =  %d",a>>=10);
}
