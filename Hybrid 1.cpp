#include <iostream>
using namespace std;

class A
{
 	public:
 	int x;
};
class B : public A
{
 	public:
 	B( )    //constructor to initialize x in base class A
 	{
 		cout<<"Hybrid inheritance."<<endl<<endl;
 	   cout<<"Enter a number:"<<endl;
 	   cin>>x;
 	}
};
class C
 {
 	public:
 	int f;
 	C( )   //constructor to initialize y
 	{
 	    f=1;
        }
};
class D : public B, public C   //D is derived from class B and class C
{
 	public:
 	int i;
 	void fact( )
 	{
 		for(i=1;i<=x;i++)
 		{
 			f*=i;
 		}
 	    cout << "Factorial of the number= " << f<<endl;
 	}
};

int main()
{
         D d;    //object of derived class D
 	d.fact( );
 	return 0;
}              