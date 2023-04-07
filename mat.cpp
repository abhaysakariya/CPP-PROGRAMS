#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5][5], b[5][5],  s[5][5];
	int i,j,n,k,sum=0;
	cout<<"\n Enter array size = ";
	cin>>n;
	cout<<"\n Enter Value of 1 Matrix :";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\n Enter Value of 2 Matrix : ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
	}
	
	cout<<"\n 1st Matrix :\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n 2nd Matrix :\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<"\n";
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			s[i][j]=0;
			for(k=0;k<n;k++)
			{
				s[i][j]	=s[i][j]+ (a[i][k] * b[k][j]);
			}
		}
	}
	
	
	cout<<"\n Your Matrix : \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{

			cout<<"\t"<<s[i][j];
		}
		cout<<"\n";
	}
	
	
}
