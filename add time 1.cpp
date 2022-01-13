#include<iostream>
using namespace std;
#include<conio.h>
#include<iomanip>
class Time
{
	int h,m;
	public:
	void read( )
	{
		cout<<"Enter hour and minute:"<<endl;
		cin>>h>>m;
	}
	void print( )
	{
		cout<<"time is:"<<setfill('0')<<setw(2)<<h;
		cout<<":"<<setfill('0')<<setw(2)<<m<<endl;
	}
	Time operator +(Time);
};
Time Time::operator +(Time t2)
{
	Time t;
	t.h=h+t2.h;
	t.m=m+t2.m;
	return t;
}
main( )
{
	Time t1,t2,t3;
	t1.read( );
	t1.print( );
	t2.read( );
	t2.print( );
	t3=t1+t2;
	cout<<"\n sum of time 1+time 2:";
	t3.print( );
}