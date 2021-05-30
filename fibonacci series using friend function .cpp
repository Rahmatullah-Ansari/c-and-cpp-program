#include<iostream>
using namespace std;
#include<conio.h>
class fib
{
	int num,a,b,i,c;
	public:
	void F( )
	{
		cout<<"Enter number of term to generate fibonacci series:"<<endl;cin>>num;
	}
	friend void fibonacci(fib);
};
void fibonacci(fib f)
{
	f.a=0;
	f.b=1;
	for(f.i=0;f.i<f.num;f.i++)
	{
		cout<<f.a<<endl;
		f.c=f.a+f.b;
		f.a=f.b;
		f.b=f.c;
	}
}
main( )
{
	fib f;
	clrscr( );
	f.F( );
	fibonacci(f);
}
	