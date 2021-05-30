//comman friend function to exchange the private value of two classes.
#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(){
        cout<<"Enter a= "<<endl;
        cin>>a;
    }
    friend void swap(A,B);
};
class B{
    int b;
    public:
    B(){
        cout<<"Enter b= "<<endl;
        cin>>b;
    }
    friend void swap(A,B);
};
void swap(A a1,B b1){
    cout<<"Before swapping:"<<endl<<"a= "<<a1.a<<endl<<"b= "<<b1.b<<endl<<"After swapping:"<<endl;
    a1.a=a1.a+b1.b;
    b1.b=a1.a-b1.b;
    a1.a=a1.a-b1.b;
    cout<<"a= "<<a1.a<<endl<<"b= "<<b1.b<<endl;
}
int main(){
    A x;//creating object.
    B y;
    swap(x,y);//calling comman friend function.
    return 0;
}