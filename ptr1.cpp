#include<iostream>
using namespace std;
int main()
{
	int a=10,b;
	int *p;
	cout<<"\n A= "<<a;
	cout<<"\n Address = "<<&a;
	p=&a;
	cout<<"\n Address of p after assigning a: "<<p;
	b=*p;
	cout<<"\n B= "<<b;
	cout<<"\n Address = "<<&b;
	
}

