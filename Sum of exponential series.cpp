#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
class evalute
{
	double x,i,sum=0,f=1;
	public:
	void input( )
	{
		cout<<"Enter x to evaluate sum of exponential series:"<<endl;
		cin>>x;
		for(i=1;i<=x;i++)
		{
			sum+=(pow(x,i)/(f*=i));
			if(i==x)
			{
			cout<<"sum of (e^x)series ="<<1+sum<<endl;
		}
		}
		}
		};
		main( )
		{
			clrscr( );
			evalute e;
			e.input( );
		}