#include<iostream>
using namespace std;
main( )
{
	int num,i;
	float f=1.0000;
	cout <<"Enter a number:\n";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		f*=i;
	}
	cout<<" Factorial of " <<num<<" is:"<<f<<endl;
}