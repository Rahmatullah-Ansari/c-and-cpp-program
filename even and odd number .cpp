#include<iostream>
using namespace std;
#include<conio.h>
class even
{
	int num;
	public:
	void E( )
	{
		cout<<"Enter a number to check even and odd :";
		cin>>num;
	}
	friend void check(even);
};
void check(even e)
{
	if(e.num%2==0)
	cout<<e.num<<"is EVEN number"<<endl;
	else
	cout<<e.num<<"is ODD number"<<endl;
}
main( )
{
	even e;
	e.E( );
	check(e);
}