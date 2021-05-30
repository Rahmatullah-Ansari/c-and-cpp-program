/*Program of function overloading*/
#include<iostream>
using namespace std;
class overload{
    public:
    void add(int a,int b){
        cout<<"Sum="<<a+b<<endl;//a+b=50.
    }
    void add(int a,char b){
        cout<<"Sum="<<a+b<<endl;//a+b=75.
    }
};
int main(){
    overload over;
    over.add(20,30);
    over.add(10,'A');//A=65.
    return 0;
}