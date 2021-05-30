#include<iostream>
using namespace std;
#include<conio.h>
class arm
{
	int rem,num,sum=0,temp;
	public:
	void A( )
	{
		cout<<"Enter a number to check an  Armstrong number:";
		cin>>num;
	}
	friend void armstrong(arm);
};
void armstrong(arm a)
{
	a.temp=a.num;
	while(a.num>0)
	{
		a.rem=a.num%10;
		a.sum+=a.rem*a.rem*a.rem;
		a.num/=10;
	}
	if(a.temp==a.sum)
	cout<<a.temp<<"is an ARMSTRONG number";
	else
	cout<<a.temp<<"is not an  ARMSTRONG number";
	}
	main( )
	{
		arm a;
		a.A( );
		armstrong(a);
	}