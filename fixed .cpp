#include<iostream>
using namespace std;
#include<conio.h>
main( )
{
	float a;
	cout<<"Enter a number:"<<endl;
	cin>>a;
	cout.precision(5);
	cout<<"a in scientific="<<std::scientific<<a<<endl<<"a in fixed="<<std::fixed<<a;
}