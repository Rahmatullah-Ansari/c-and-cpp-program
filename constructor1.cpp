#include<iostream>
using namespace std;
#include<conio.h>
class hello
{
	public:
	int a,b;
	hello( )
	{
		a=20;
		b=80;
	}
};
main( )
{
	hello h;
	cout<<"a="<<h.a<<endl<<"b="<<h.b<<endl;
}