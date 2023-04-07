#include<iostream>
using namespace std;
class Father
{
	public:
		Father()
		{
			cout<<"\n I m Father";
		}
};
class Daughter: public Father
{
	public:
		Daughter()
		{
			cout<<"\n I m Daughter";
		}
};
class Son : public Father //Inheritance...
{
	
	public:
		Son()
		{
			cout<<"\n I m Son";
		}
};
int main()
{
	Daughter d;
	Son s;
}
