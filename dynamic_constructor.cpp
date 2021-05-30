//dynamic constructor.
#include<iostream>
using namespace std;
class dynamic_constructor{
    int *a;
    int *b;
    public:
    dynamic_constructor(int x,int y){
        a=new int;
        b=new int;
        *a=x;
        *b=y;
    }
    void sum(){
        cout<<"sum of two numbers = "<<*a+*b<<endl;
    }
};
int main(){
    dynamic_constructor d(45.45,20.1);
    d.sum();
    return 0;
}