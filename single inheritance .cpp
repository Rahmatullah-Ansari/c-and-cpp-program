#include<iostream>
#include<conio.h>
using namespace std;
class hello
{
	public:
	hello( )
	{
		cout<<"Single inheritance."<<endl<<endl;
		cout<<"Hello i am Rahmatullah."<<endl;
	}
};
class hii : public hello
{
};
main( )
{
	clrscr( );
	hii h;
}