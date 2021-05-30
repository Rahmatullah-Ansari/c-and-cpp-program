#include<iostream>
#include<conio.h>
using namespace std;
main( )
{
	int a;
	int *p;
	p=&a;
	cout<<"Enter a:"<<endl;
	cin>>a;
	cout<<a<<endl;
	cout<<p<<endl;
	cout<<&a<<endl;
	cout<<&p<<endl;
	cout<<*(&a)<<endl;
}