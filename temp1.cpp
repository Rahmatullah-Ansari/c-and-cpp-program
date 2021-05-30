#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
    int h,m;
    public :
    void read();
    void print();
    Time operator + (Time);
    //operator overloading
    
};
void Time::read()
{
    cout<<"\n Enter hour,min\n";
    cin>>h>>m; 
}
void Time::print()
{
    cout<<"\n Time is"<<setfill('0')<<setw (2)<<h;
    cout<<":"<<setfill('0')<<setw(2)<<m<<endl;
    
}
Time Time::operator+(Time t2)
{
    Time t;
    t.h= h+t2.h;
    t.m= m+t2.m;
    return t;
    
}
int main()
{
    Time t1,t2,t3;
    t1.read();
    t1.print();
    t2.read();
    t2.print();
    t3 =t1+ t2;
    cout<<"\n time1 + time2:\n";
    t3.print();
    return 0;

}