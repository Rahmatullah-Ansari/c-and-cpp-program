#include<iostream>
using namespace std;
#include<conio.h>
class fseries
{
	int i,num;
	float f=1;
	long double  sum=0;
	public:
	void F( )
	{
		cout<<"Enter number of term:"<<endl;
		cin>>num;
	}
	friend void fsum(fseries);
};
void fsum(fseries fs)
{
	for(fs.i=1;fs.i<=fs.num;fs.i++)
	{
		fs.f*=fs.i;
		fs.sum+=(fs.i/fs.f);
		if(fs.i==fs.num)
		cout<<fs.i<<"/"<<fs.f<<"="<<fs.sum;
else
cout<<fs.i<<"/"<<fs.f<<"+";		
	}
}
main( )
{
	fseries fs;
	fs.F( );
	fsum(fs);
}
	