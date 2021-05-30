#include<iostream>
#include<conio.h>
using namespace std;
class py
{
	int a,b,c;
	public:
	void P( )
	{
		cout<<"Enter a,b and c:"<<endl;
		cin>>a>>b>>c;
	}
	friend void pythagorean(py);
};
void pythagorean(py p)
{
	if(p.c*p.c==p.a*p.a+p.b*p.b)
	cout<<p.a<<","<<p.b<<"and"<<p.c<<"are generate PYTHAGOREAN TRIPLET "<<endl;
	else
	cout<<p.a<<","<<p.b<<","<<"and"<<p.c<<"are not generate  PYTHAGOREAN TRIPLET "<<endl;
}
main( )
{
	py p;
	p.P( );
	pythagorean(p);
}