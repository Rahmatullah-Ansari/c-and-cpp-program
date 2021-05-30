#include<iostream>
using namespace std;
#include<conio.h>
class input
{
	int a,b,x,y;
	public:
	input(int a,int b)
	{
		x=a;
		y=b;
	}
	input(input &i)
	{
		x=i.x;
		y=i.y;
	}
	void show( )
	{
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
	}
};
main( )
{
	clrscr( );
	input c(20,60);
	input c1(c);
	input c2=c;
	c.show( );
	c1.show( );
	c2.show( );
}