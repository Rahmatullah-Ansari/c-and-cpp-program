#include<iostream>
using namespace std;
#include<conio.h>
class table
{
	int num,i,j;
	friend void tables(table);
};
void tables(table t)
{
	for(t.i=1;t.i<=20;t.i++)
	{
		for(t.j=1;t.j<=10;t.j++)
		{
			cout<<t.i<<"*"<<t.j<<"="<<t.i*t.j<<endl;
		}
		cout<<endl;
	}
}
main( )
{
table t;
tables(t);
}
