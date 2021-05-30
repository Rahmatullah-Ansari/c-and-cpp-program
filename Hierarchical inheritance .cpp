#include<iostream>
using namespace std;
#include<conio.h>
class Add
{
	public:
	int a,b;
	Add( )
	{
		cout<<"Hierarchical inheritance."<<endl<<endl;
		cout<<"Enter a&b:"<<endl;
		cin>>a>>b;
		cout<<"sum of two numbers="<<a+b<<endl;
	}
};
class sum:public Add
{
};
class sum1:public Add
{
};
class sum2:public Add
{
	public:
	sum2( )
	{
	cout<<"a*b="<<a*b<<endl;
}
};
main( )
{
	clrscr( );
	sum s;
	sum1 s1;
	sum2 s2;
}