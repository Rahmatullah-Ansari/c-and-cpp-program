#include<iostream>
using namespace std;
#include<conio.h>
class information
{
	public:
	char name[100];
	void input( )
	{
		cout<<"Multi path inheritance."<<endl<<endl;
		cout<<"Enter the name:"<<endl;
		cin>>name;
	}
	void show( )
	{
		cout<<"Name :"<<name<<endl;
	}
};
class Contact:virtual public information
{
	public:
	char contact[100];
	void take( )
	{
		cout<<"Enter contact number:"<<endl;
		cin>>contact;
	}
	void out( )
	{
		cout<<"Contact Number:"<<contact<<endl;
	}
};
	class dob:virtual public information
	{
		public:
		char D[100];
		void getdob( )
		{
			cout<<"Enter Date of birth:"<<endl;
			cin>>D;
		}
		void display( )
		{
			cout<<"Date of birth :"<<D<<endl;
		}
	};
		class AGE:public Contact,public dob
		{
			public:
			int Age ;
			void getage( )
			{
				cout<<"Enter Age:";
				cin>>Age;
			}
			void put( )
			{
				cout<<"Age:"<<Age<<endl;
			}
		};
		main( )
		{
			clrscr( );
			AGE a;
			a.input( );
			a.take( );
			a.getdob( );
			a.getage( );
			cout<<"Informations are:"<<endl;
			a.show( );
			a.out( );
			a.display( );
			a.put( );
		}