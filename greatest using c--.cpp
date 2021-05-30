#include<iostream>
using namespace std;
class g
{
      int a,b,c;
      public:
      void greatest( )
      {
      	cout<<"Enter three numbers:"<<endl;
      	cin>>a>>b>>c;
      	if(a>b)
      	{
      		if(a>c)
      		{
      			cout<<a<< "is greatest number."<<endl;
      		}
      		else
      		cout<<c<< "is greatest number."<<endl;
      	}
      	else if(b>c)
      	{
      		cout<<b<< "is greatest number."<<endl;
      	}
      	else
      	cout<<c<< "is greatest number."<<endl;
      }
};
 main( )
{
	g gr;
	gr.greatest( );
}