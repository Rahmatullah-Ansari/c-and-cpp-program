#include<iostream>
using namespace std;
class Add
{
	int r,i,r1,i1;
	public:
	void number1( )
	{
		cout<<"Enter real and imaginary part:"<<endl;
		cin>>r>>i;
	}
	void number2( )
	{
		cout<<"Enter real and imaginary part:"<<endl;
		cin>>r1>>i1;
	}
	void display( );
	Add operator+(Add);
};
Add Add::operator+(Add a)
{
	Add x;
	
		