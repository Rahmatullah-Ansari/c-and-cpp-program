#include<iostream>
using namespace std;
class fact
{
	int i ,f=1,num;
	public:
	void factorial( )
	{
		cout<<"Enter a number to find it's factorial:"<<endl;
		cin>>num;
		i=1;
		while(i<=num)
		{
			f*=i;
			i++;
		}
		cout<<"Factorial of" <<num<< "is =" <<f<<endl;
	}
};
main( )
{
fact ft;
ft.factorial( );
}