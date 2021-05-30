#include<iostream>
using namespace std;
#include<conio.h>
class hello
{
	public:
	hello( )
	{
		cout<<"Multiple inheritance."<<endl<<endl;
		cout<<"I am a student."<<endl;
	}
};
class hii
{
	public:
	hii( )
	{
		cout<<"My hobby is to reading books."<<endl;
	}
};
class My_friend:public hello ,public hii
{
};
main( )
{
	clrscr( );
	My_friend M;
}