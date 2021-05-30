#include<iostream>
using namespace std;
#include<conio.h>
class hello
{
	public:
	int i,f=1,num;
	hello( );
};
hello::hello( )
{
	cout<<"Enter a number:"<<endl;
	cin>>num;
	for(i=1;i<=num;i++)
	{
		f*=i;
	}
}
main( )
{
	hello h;
	cout<<"Factorial of "<<h.num<<"is="<<h.f<<".";
}