#include<iostream>
using namespace std;
#include<conio.h>
class outer
{
	int a;
	public:
	class inner
	{
		int b;
		public:
		void input( )
		{
			cout<<"Enter value of b="<<endl;
			cin>>b;
			cout<<"Increment in b="<<b+1<<endl;
		}
	};
	void get( )
	{
		cout<<"Enter value of a="<<endl;
		cin>>a;
		cout<<"Decrement in a="<<a-1<<endl;
	}
};
main( )
{
	clrscr( );
	outer o1;
	o1.get( );
	outer ::inner i1;
	i1.input( );
}
