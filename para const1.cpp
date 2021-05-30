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
	void out( )
	{
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
	}
};
main( )
{
	clrscr( );
	input i(20,60);
	input j=input(100,200);
	i.out( );
	j.out( );
}