#include<iostream>
using namespace std;
#include<conio.h>
class integer
{
	int *x;
	int *y;
	public:
	integer(int x1,int y1)
	{
		x=new int ;
		*x=x1;
		y=new int;
		*y=y1;
	}
	void add( )
	{
		int sum;
		sum=*x+*y;
		cout<<"sum is ="<<sum;
	}
};
main( )
{
	clrscr( );
	integer j(20,30);
	j.add( );
}