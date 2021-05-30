#include<iostream>
using namespace std;
#include<conio.h>
class circle
{
	float pie,r;
	public:
	void input( )
	{
		pie=3.141;
		cout<<"Enter radius of circle: "<<endl;
		cin>>r;
	}
	void show( ) const 
	{
		cout<<"Circumference of circle of radius r is ="<<2*pie*r<<"\t unit"<<endl;
		cout<<"Area of circle of radius r is="<<pie*r*r<<"\t square unit"<<endl;
	}
};
main( )
{
	circle c;
	c.input( );
	c.show( );
}