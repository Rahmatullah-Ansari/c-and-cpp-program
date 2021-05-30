#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	int a,b;
	friend void rahmat(sample);
};
void rahmat(sample s)
{
	cout<<"Enter a:"<<endl;
	cin>>s.a;
	cout<<"Enter b:"<<endl;
	cin>>s.b;
	cout<<s.a<<"+"<<s.b<<"="<<s.a+s.b<<endl;
}
main( )
{
	sample s;
	clrscr( );
	rahmat(s);
}