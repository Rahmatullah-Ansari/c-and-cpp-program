#include<iostream>
#include<conio.h>
using namespace std;
class x;
class y
{
	int a;
	public:
	void A( )
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
	}
	friend void compare( y,x);
};
class x
{
	int b;
	public:
	void B( )
	{
		cout<<"Enter b:"<<endl;
		cin>>b;
	}
	friend void compare(y,x);
};
void compare(y y1,x x1)
{
	if(y1.a>x1.b)
	cout<<y1.a<<"is greatest"<<endl;
	else if(x1.b>y1.a)
	cout<<x1.b<<"is greatest"<<endl;
	else
	cout<<"both"<<x1.b<<"and"<<y1.a<<"are equal"<<endl;
}
main( )
{
	y y1;
	x x1;
	x1.B( );
	y1.A( );
	compare(y1,x1);
}