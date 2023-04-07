#include<iostream>
using namespace std;
class Father
{
	public:
		Father()
		{
			cout<<"\n I m Parent class1";
		}
};
class Mother
{
	public:
		Mother()
		{
			cout<<"\n I m Parent class2";
		}
};
class Child : public Father,public Mother  //Inheritance...
{
	
	public:
		Child()
		{
			cout<<"\n I m Child class";
		}
};
int main()
{
	Child o;
}
