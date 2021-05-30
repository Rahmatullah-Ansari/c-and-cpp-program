#include<iostream>
using namespace std;
main( )
{
	int num,i;
	cout<<"Enter a number to generate it's table:"<<endl;
	cin>>num;
	for(i=1;i<=10;i++)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
}
	