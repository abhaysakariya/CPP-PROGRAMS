#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1("Hello Friends");
	string s2("Books");
	string s3("CPP PROGRAMMING");
	string s4("World");
	int len,pos;
	len=s1.length();
	cout<<"Length of s1= "<<len<<endl;
	s2.append("Small");
	cout<<"s2 after appending: "<<s2<<endl;
	s2.assign(10,'*');
	cout<<"S2 after assigning * : "<<s2<<endl;
	return 0;
}
