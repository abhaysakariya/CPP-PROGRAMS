#include<iostream>
using namespace std;
int main()
{
		int a,b,c,d;
		cout<<"Enter a ,b and c:";
		cin>>a>>b>>c;
		cout<<"A="<<a<<"\t B= "<<b<<"\t c= "<<c;
		try
		{
			if((a-b)!=0)
			{
			d=(c/(a-b));
			cout<<"D="<<d;
			}
			else 
			{
				throw a-b;
			}
		}
		catch(int e)
		{
			cout<<"\n Answer is 0. and Value cant divisible by 0:";
		}
		return 0;
}
