#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
class N;
class X
{
	int base_num,c;
	public:
	void base( )
	{
		cout<<"Enter base number:"<<endl;
		cin>>base_num;
	}
	friend void power(X,N);
};
class N
{
	int n;
	public:
	void power_of_num( )
	{
		cout<<"Enter power of the base number:"<<endl;
		cin>>n;
	}
	friend void power(X,N);
};
void power(X x,N n1)
{
	x.c=pow(x.base_num,n1.n);
	cout<<"power of number"<<endl<<x.base_num<<"^"<<n1.n<<"="<<x.c<<endl;
}
main( )
{
	clrscr( );
	X x;
	N n1;
	x.base( );
	n1.power_of_num( );
	power(x,n1);
}