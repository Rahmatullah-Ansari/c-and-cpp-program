#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	public :
	void sum( int a, int b)
	{
		int c;
		c=a+b;
		cout <<" sum of "       <<a<< "and"  <<b<<  "is=" <<c<<endl;
	};
	void mul(int a, int b)
	{
		int c;
		c=a*b;
		cout <<"mul of "<<a<<"and"<<b<<"is="<<c;
	};
};
main( )
{
	a obj;
	clrscr( );
	obj.sum(10,30);
	obj.mul(29,10);
}