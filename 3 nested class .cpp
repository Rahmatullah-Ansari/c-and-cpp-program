#include<iostream>
using namespace std;
#include<conio.h>
class outer
{
	int a,b;
	public:
	class inner
	{
		int x,y;
		public:
		class minner
		{
			int c,d,num;
			public:
			void fact( )
			{
				cout<<"Enter a number :"<<endl;
				cin>>num;
				c=1;
				for(d=1;d<=num;d++)
				{
					c*=d;
				}
				cout<<"Factorial of the number are:"<<c<<endl;
			}
		};
		void table( )
		{
			cout<<"Enter a number to generate it's table :"<<endl;
			cin>>x;
			for(y=1;y<=10;y++)
			{
				cout<<x<<"*"<<y<<"="<<x*y<<endl;
			}
		}
	};
	void leap( )
	{
		cout<<"Enter a year to check whether it is leap year or not:"<<endl;
		cin>>a;
		if(a%4==0)
		cout<<"Year is leap year."<<endl;
		else
		cout<<"Year is not a leap year."<<endl;
	}
};
main( )
{
	clrscr( );
	outer::inner::minner m;
	m.fact( );
	outer::inner i;
	i.table( );
	outer o;
	o.leap( );
}
			