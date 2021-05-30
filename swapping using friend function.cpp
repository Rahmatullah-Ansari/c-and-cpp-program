#include<iostream>
using namespace std;
class B;
class A
{
	int c,a;
	public:
	void x( )
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
	}
	friend void swap(A,B);
};
class B
{
	int b;
	public:
	void y( )
	{
		cout<<"Enter b:"<<endl;
		cin>>b;
	}
	friend void swap(A,B);
};
void swap(A a1,B b1)
{
	a1.c=a1.a;
	a1.a=b1.b;
	b1.b=a1.c;
	cout<<" After swapping "<<endl<<"a="<<a1.a<<endl<<"b="<<b1.b;
}
main( )
{
	A a1;
	a1.x( );
	B b1;
	b1.y( );
	swap(a1,b1);
}