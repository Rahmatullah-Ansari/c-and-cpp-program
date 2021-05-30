#include<iostream>
using namespace std;
#include<conio.h>
class hello
{
	public:
	int a,b,x,y;
	hello( )
	{
		cout<<"Default constructor call."<<endl;
	}
	hello(int a,int b)
	{
		
		x=a;
		y=b;
		cout<<"x="<<x<<endl<<"y="<<y<<endl<<endl<<"Parameterized constructor call."<<endl;
	}
	hello(hello &h)
	{
		x=h.x;
		y=h.y;
		cout<<"x="<<x<<endl<<"y="<<y<<endl<<"Copy constructor call"<<endl;
	}
	void show( )
	{
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
	}
};
main( )
{
	clrscr( );
	hello c;
	hello c1(20,60);
	hello c2=c1;
	c1.show( );
	c2.show( );
}