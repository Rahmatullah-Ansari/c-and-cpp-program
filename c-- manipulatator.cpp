#include<iostream>
#include<iomanip>
using namespace std;
main( )
{
    int num,basic=20,ta=40;	cout<<"kec"<<endl<<"Bhilai"<<endl<<"cse 4th"<<endl;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<setbase(8)<<num<<endl;
    cout<<setbase(16)<<num<<endl;
    cout<<setbase(2)<<num<<endl;
    cout<<setbase(10)<<num<<endl;
    cout<<scientific<<num<<endl;
    cout<<fixed<<num<<endl;
    cout<<setw(2)<<"basic"<<setw(2)<<basic<< setw<<ta<<endl<<setw(2)<<"ta"<<endl<<setw(2)<<endl;
}