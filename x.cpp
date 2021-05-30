#include<iostream>
using namespace std;
#include<conio.h>
class multiply
{
	int a[100][100],b[100][100],c[100][100],i,j,k,m,n,p,q,sum=0;
	public:
	friend void multiplication(multiply);
};
void multiplication(multiply ml)
{
	cout<<"Enter row and column of first matrix:"<<endl;
	cin>>ml.m>>ml.n;
	cout<<"Enter the elements of first matrix:"<<endl;
	for(ml.i=0;ml.i<ml.m;ml.i++)
	{
		for(ml.j=0;ml.j<ml.n;ml.j++)
		{
			cin>>ml.a[ml.i][ml.j];
		}
	}
	cout<<"Enter the row and column of second matrix:"<<endl;
	cin>>ml.p>>ml.q;
	if(ml.n!=ml.p)
	cout<<"Matrices of entered ordered can't be multiply with each other."<<endl;
	else
	{
		cout<<"Enter the elements of second matrix:"<<endl;
		for(ml.i=0;ml.i<ml.p;ml.i++)
		{
			for(ml.j=0;ml.j<ml.q;ml.j++)
			{
				cin>>ml.b[ml.i][ml.j];
			}
		}
		for(ml.i=0;ml.i<ml.m;ml.i++)
		{
			for(ml.j=0;ml.j<ml.q;ml.j++)
			{
				for(ml.k=0;ml.k<ml.p;ml.k++)
				{
					ml.sum+=ml.a[ml.i][ml.k]*ml.b[ml.k][ml.j];
				}
				ml.c[ml.i][ml.j]=ml.sum;
				ml.sum=0;
			}
		}
		cout<<"Multiplied matrix is:"<<endl;
		for(ml.i=0;ml.i<ml.m;ml.i++)
		{
			for(ml.j=0;ml.j<ml.q;ml.j++)
			{
				cout<<ml.c[ml.i][ml.j]<<"\t";
			}
			cout<<"\n";
		}
	}
}
main( )
{
	multiply ml;
	multiplication(ml);
}

	
		