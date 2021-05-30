//nested class example.
#include<iostream>
using namespace std;
class outer_class{
    int num;
    public:
    class inner_class{
        int num1;
        public:
        void input(){
            cout<<"Enter second number ="<<endl;
            cin>>num1;
            if(num1%2==0)
            cout<<"Second number "<<num1<<" is even number."<<endl;
            else
            cout<<"Second number "<<num1<<" is even number."<<endl;
        }
        };
        void input(){
            cout<<"Enter first number ="<<endl;
            cin>>num;
            if(num%2==0)
            cout<<"First number "<<num<<" is even number."<<endl;
            else
            cout<<"First number "<<num<<" is even number."<<endl;
    }
};
int main(){
    outer_class oc;//outer class object.
    oc.input();//calling corresponding class member function.
    outer_class::inner_class ic;//inner class object.
    ic.input();
    return 0;
}