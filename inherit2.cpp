#include<iostream>
using namespace std;
class GFather
{
	public:
		GFather()
		{
			cout<<"\n I m GFather";
		}
};
class Father: public GFather
{
	public:
		Father()
		{
			cout<<"\n I m Father";
		}
};
class Son : public Father  //Inheritance...
{
	
	public:
		Son()
		{
			cout<<"\n I m Child class";
		}
};
int main()
{
	Son o;
}
