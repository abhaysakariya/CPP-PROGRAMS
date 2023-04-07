#include<iostream>
using namespace std;
class my
{
	int a,b;
	public:
		int get()
		{
			cout<<"Enter A and B: "<<endl;
			cin>>a>>b;
		}
		friend int gen(my obj);
};
int gen(my obj)
{
	return int(obj.a+obj.b)/2;
}
int main()
{
	my obj;
	obj.get();
	cout<<"Common Factor= "<<gen(obj)<<endl;
}
