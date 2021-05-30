#include<iostream>
using namespace std;
#include<conio.h>
class cube
{
	public:
	int side;
	cube(int x)
	{
		side=x;
	}
};
main( )
{
	clrscr( );
	cube c(10);
	cube d(20);
	cube e(30);
	cout<<"cubes are:"<<endl<<c.side<<endl<<d.side<<endl<<e.side<<endl;
}