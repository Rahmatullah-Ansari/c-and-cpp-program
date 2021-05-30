#include<iostream>
using namespace std;
#include<conio.h>
class A;
class B;
class C
{
	int a;
	public:
	void X( )
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
	}
	friend void compare(C,B,A);
};
class B
{
	int b;
	public:
	void Y( )
	{
		cout<<"Enter b:"<<endl;
		cin>>b;
	}
	friend void compare(C,B,A);
};
class A
{
	int c;
	public:
	void Z( )
	{
		cout<<"Enter c:"<<endl;
		cin>>c;
	}
	friend void compare(C,B,A);
};
void compare(C c1,B b1,A a1)
{
	if(c1.a>b1.b)
	{
		if(c1.a>a1.c)
	cout<<c1.a<<"is greatest"<<endl;
	}
	else if(b1.b>a1.c)
	cout<<b1.b<<"is greatest"<<endl;
	else
	cout<<a1.c<<"is greatest"<<endl;
}
main( )
{
	C c1;
	B b1;
	A a1;
	c1.X( );
	b1.Y( );
	a1.Z( );
	compare(c1,b1,a1);
}