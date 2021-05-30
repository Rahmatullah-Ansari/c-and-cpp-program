/*Multilevel inheritance*/#include<iostream>
using namespace std;
#include<conio.h>
class hello
{
	public:
	hello( )
	{
		cout<<"Multilevel inheritance."<<endl<<endl;
		cout<<"Good evening sir!"<<endl;
	}
};
class hii: public hello
{
	public:
	hii( )
	{
		cout<<"How are you?"<<endl;
	}
};
class My_teacher:public hii
{
	public:
	My_teacher( )
	{
		cout<<"You are the best."<<endl;
	}
};
main( )
{
	clrscr( );
	My_teacher M;
}