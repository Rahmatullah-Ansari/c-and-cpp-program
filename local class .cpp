#include<iostream>
using namespace std;
#include<conio.h>
int x=200;
void fun( )
{
	class test
	{
		int x1;
		public:
		void show( )
		{
			x1=100;
			cout<<"local x1="<<x1<<endl;
			cout<<"global x="<<::x;
		}
	};
		test t;
		t.show( );
}
main( )
{
	clrscr( );
	fun( );
}