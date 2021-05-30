//friend class.
#include<iostream>
using namespace std;
class first{//this class is container class.
    int u,v;
    public:
    friend class second;
    void input(){
        cout<<"Enter a and b two numbers= "<<endl;
        cin>>u>>v;
    }
};
class second{
    public:
    second(first f){//this class is contained class.
        cout<<"Division of two numbers."<<endl;
        cout<<"Remainder= "<<f.u%f.v<<endl;
        cout<<"Quotient= "<<f.u/f.v<<endl;
    }
};
int main(){
    first f;//creating object of first class.
    f.input();//calling member function of class first.
    second s(f);//calling constructor using friend class.
    return 0;
}
