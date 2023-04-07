#include<iostream>
using namespace std;
int main()
{
	try 
	{
		throw 200;
	}
	catch(int n)
	{
		cout<<"Exception: this is a number= "<<n;
	}
	return 0;
}
