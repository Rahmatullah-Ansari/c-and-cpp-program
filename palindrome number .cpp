#include<iostream>
using namespace std;
#include<conio.h>
class p
{
	int num,t,s=0,r;
	public:
	void P( )
	{
		cout<<"Enter a number to check whether it is palindrome or not:";
		cin>>num;
	}
	friend void palindrome(p);
};
void palindrome(p p1)
{
	p1.t=p1.num;
	while(p1.num>0)
	{
		p1.r=p1.num%10;
		p1.s=p1.s*10+p1.r;
		p1.num/=10;
	}
	if(p1.t==p1.s)
	cout<<p1.t<<"is PALINDROME number"<<endl;
	else
	cout<<p1.t<<"is not PALINDROME number"<<endl;
}
main( )
{
p p1;
p1.P( );
palindrome(p1);
}
	