#include<iostream>
using namespace std;
#include<conio.h>
class hello
{
	public:
	int a,b;
	hello( )
	{
		cout<<"Enter a&b:"<<endl;
		cin>>a>>b;
	}
};
main( )
{
	hello h;
	cout<<"sum of the numbers:"<<endl<<h.a<<"+"<<h.b<<"="<<h.a+h.b;
}