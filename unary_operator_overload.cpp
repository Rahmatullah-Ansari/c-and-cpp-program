//overload unary(-) operator.
#include<iostream>
using namespace std;
class unary_overload{
    int x,y;
    public:
    void get_input(){
        cout<<"Enter value of a and b ="<<endl;
        cin>>x>>y;
    }
    void operator -(){
        x=-x;
        y=-y;
    }
    void show(){
        cout<<x<<','<<y<<endl;
    }
};
int main(){
    unary_overload un;
    un.get_input();
    cout<<"Before overloading unary operator number are=";
    un.show();
    -un;
    cout<<"After overloading unary operator numbers are=";
    un.show();
    return 0;
}
    