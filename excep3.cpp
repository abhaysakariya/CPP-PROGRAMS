#include<iostream>
using namespace std;double div(double x,double y)
{
	if(y==0)
	{
		throw "This is divisible by 0 exception";
	}
	else 
	{
		cout<< x/y;
	}
}
int main()
{
	int y;
	try
	{
		double a=div(10,0);
	}
	catch(char* z)
	{
		cout<<"Error is :"<<z;
	}
	return 0;
}
