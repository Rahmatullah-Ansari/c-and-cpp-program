#include<iostream>
using namespace std;
#include<conio.h>
void swap(int *x,int *y);
int  swapp(int x,int y);
main( )
{
	int c,x,y;
	cout<<"1.call by reference."<<endl<<"2.call by value."<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
		cout<<"By call by reference."<<endl;
		cout<<"Enter two number:"<<endl;
		cin>>x>>y;
		cout<<"Before swapping."<<endl;	cout<<"x="<<x<<endl<<"y="<<y<<endl;
		swap(&x,&y);
		cout<<"After swapping."<<endl;
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
		break;
		case 2:
			cout<<"By call by value."<<endl;
		cout<<"Enter two number:"<<endl;
		cin>>x>>y;
				cout<<"Before swapping."<<endl;	cout<<"x="<<x<<endl<<"y="<<y<<endl;
		swapp(x,y);
				cout<<"After swapping."<<endl;
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
		break;
	}
}
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int swapp( int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	return (x,y);
}