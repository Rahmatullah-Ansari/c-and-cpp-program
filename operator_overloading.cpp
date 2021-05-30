//overload == operator.
#include<iostream>
using namespace std;
#include<conio.h>
class Equal{
    int num;
    public:
    void input(){
        cin>>num;
    }
    void operator == (Equal e){//e is called explicit object.
        if (num == e.num){
            cout<<"Equal object."<<endl;
        }
        else
        cout<<"Object are not equal."<<endl;
    }
};
int main(){
    Equal e1,e2;
    cout<<"Enter e1 object value=";
    e1.input();
    cout<<"Enter e2 object value=";
    e2.input();
    e1==e2;
    return 0;
}