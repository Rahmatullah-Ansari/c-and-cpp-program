#include <iostream>
#include <conio.h>
using namespace std;
class Add
{
    int hour=0,minute=0;
    public:
    void input( )
{
    cout << "\n Enter the hour(0-11):";
    cin >> hour;
    cout << "\n Enter the minute(0-59): ";
    cin >> minute;
}
    void display( )
    {
        cout<< hour<< ":"<< minute;
    }
    
    //overloading '+' operator
    Add operator+(Add);   
};

Add Add::operator+(Add a)	//operator function
{
    Add a1;
    int x;
    x=minute+a.minute;
    a1.minute= x%60;
    a1.hour = (x/60)+hour+a.hour;
    a1.hour=a.hour%12;
    return a1;
}

main()
{
   Add a,c,d;
 
    cout << "\n Enter the first time:";
    a.input();
    cout << "\n Enter the second time: ";
    c.input();
    d = a+c;	//adding of two time object using '+' operator
    cout << "\n First time: ";
    a.display( );
    cout << "\n Second time :";
    c.display( );
    cout << "\n Sum of times: ";
    d.display( );
}