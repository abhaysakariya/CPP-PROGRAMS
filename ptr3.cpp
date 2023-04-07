#include<iostream>
using namespace std;
int main()
{
	int a[5]={6,7,8,9,10};
	int *p[5],i;
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<"\n p= "<<*p[i];
	}

}

