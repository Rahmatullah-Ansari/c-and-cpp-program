//static data member and member function.
#include<iostream>
using namespace std;
class static_function{
    static int x,y;
    public:
    static void input(){//static member function.
    cout<<"Enter two integer number= ";
    cin>>x>>y;
    cout<<"Sum= "<<x+y<<endl;
    }
};
int static_function::x;//definition of static data type.
int static_function::y;
int main(){
    // static_function sf;
    //calling the static data type.
    // sf.input();
    static_function::input();
}