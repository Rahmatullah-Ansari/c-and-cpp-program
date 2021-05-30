//destructor.
#include<iostream>
using namespace std;
class destructor{
    public:
    destructor(){
        cout<<"Constructor is called."<<endl;
    }
    ~destructor(){
        cout<<"Destructor is called."<<endl;
    }
};
int main(){
    destructor d;
    return 0;
}