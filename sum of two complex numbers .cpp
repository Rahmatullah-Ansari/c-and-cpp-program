#include<iostream>
using namespace std;
#include<conio.h>
class cmp
{
	int r1,i1,r2,i2;
	public:
	void S( )
	{
		cout<<"Enter real and imaginary part of first complex  number:"<<endl;
		cin>>r1>>i1;
		cout<<"Enter real and imaginary part of second complex number:"<<endl;
		cin>>r2>>i2;
	}
	friend void add(cmp);
};
void add(cmp c)
{
	if((c.i1+c.i2)>0)
	cout<<"sum of two complex numbers is="<<c.r1+c.r2<<"+"<<c.i1+c.i2<<"i"<<endl;
	else if((c.i1+c.i2)==0)
	cout<<"sum of two complex numbers is="<<c.r1+c.r2<<endl;
	else
	cout<<"sum of two complex numbers is="<<c.r1+c.r2<<c.i1+c.i2<<"i"<<endl;
}
main( )
{
	cmp c;
	c.S( );
	add(c);
}
	
		