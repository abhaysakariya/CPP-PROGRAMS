#include<iostream>
using namespace std;
int main()
{
	int a[5]={6,7,8,9,10};
	int *p;
	p=&a[0];
	cout<<"\n ++ *p= "<<++ *p;
	cout<<"\n -- *p= "<<-- *p;
	cout<<"\n *p+1 = "<<*p+1;
	cout<<"\n *p+2 = "<<*p+2;
	cout<<"\n *p+3 = "<<*p+3;
	cout<<"\n (*p+3 - *p+1)" <<(*p+3) - (*p+1);
}

