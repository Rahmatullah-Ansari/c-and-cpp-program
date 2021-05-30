//constructor_overloading.
#include<iostream>
using namespace std;
class overload{
    public:
    overload(int a,int b){
        cout<<"Sum = "<<a+b<<endl;
    }
    overload(int a,char b){
        cout<<"Sum = "<<a+b<<endl;
    }
    overload(float u,int b){
        cout<<"Sum = "<<u+b<<endl;
    }
    overload(double a,int b){
        cout<<"Sum = "<<a+b<<endl;
    }
};
int main(){
    overload o(50,70);
    overload o1(45,'a');
    overload o2(5.3,3);
    overload o3(3.5,10);
    return 0;
}