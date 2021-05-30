#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	public:
	int num,rev=0,sum=0,rem;
};
class B:virtual public A
{
	public:
	B( )
	{
		cout<<"Enter a number:"<<endl;
		cin>>num;
		while(num>0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num/=10;
		}
			cout<<"Revere of the number="<<rev<<endl;
	}
	};	
	class C:virtual public A
	{
		public:
		C( )
		{
			cout<<"Enter a number:"<<endl;
			cin>>num;
			while(num>0)
			{
				rem=num%10;
				sum+=rem;
				num/=10;
			}
				cout<<"sum of digits of the number="<<sum<<endl;
		}
	};
	class D:public B,public C
	{
	};
	main( )
	{
		clrscr( );
		D d;
	}