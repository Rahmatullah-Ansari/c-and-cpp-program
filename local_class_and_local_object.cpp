//local class and local object.
#include<iostream>
using namespace std;
int global_var=1000;//global variable.
void local(){
    class local_class{//local class.
    int t;
    public:
    void display(){
        t=600;
        cout<<"Local variable = "<<t<<endl;
        cout<<"Global variable ="<<::global_var<<endl;
    }
    };
    local_class lc;//local object for local class.
    lc.display();//calling local class member function.
    }
    int main(){
        local();//calling function which contain local class.
        return 0;
    }