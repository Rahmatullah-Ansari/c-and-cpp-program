#include <iostream>
using namespace std;
#include<conio.h>
class Rectangle
{
	int length,l,b;
	int breadth;
	public:
		void setDimension(int l, int b)
		{
			length = l;
			breadth = b;
		}
		void getArea( )
		{
		cout<<length*breadth<<endl;
		}
		Rectangle( )           // Constructor
		{
			cout << "Constructor" << endl;
		}
		~Rectangle( )            // Destructor
		{
			cout << "Destructor" << endl;
		}
};

main( )
{
	Rectangle rt;
	rt.setDimension(7, 4);
	rt.getArea( );
}