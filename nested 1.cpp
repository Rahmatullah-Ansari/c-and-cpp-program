#include<iostream>
using namespace std;
#include<conio.h>
class outer
{
	int a,b;
	public:
	class inner
	{
		int i,num;
		float f=1;
		public:
		void fact( )
		{
			cout<<"Enter a number:"<<endl;
			cin>>num;
			for(i=1;i<=num;i++)
			{
				f*=i;
			}
			cout<<"Factorial of the number is="<<f<<endl;
		}
	};
	void sum( )
	{
		cout<<"Enter the value of a and b:"<<endl;
		cin>>a>>b;
		cout<<"sum of the numbers are="<<a+b<<endl;
	}
};
main( )
{
	outer o1;
	o1.sum( );
	outer::inner i1;
	i1.fact( );
}