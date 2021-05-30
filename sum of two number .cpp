#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
class A;
class B
{
	int b;
	public:
	void get( )
	{
		cout<<"Enter b:"<<endl;
		cin>>b;
	}
	friend void sum(A,B);
};
class A
{
	int a;
	public:
	void put( )
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
	}
	friend void sum(A,B);
};
void sum(A x,B y)
{
	cout<<pow(x.a,y.b);
}
main( )
{
	A x;
	x.put( );
	B y;
	y.get( );
	sum(x,y);
}