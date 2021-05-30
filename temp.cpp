#include<iostream>
using namespace std;
#include<conio.h>
class person{
    protected:
    int salary;
};
class Man:public person{
    public:
    int bonous;
    void setsalary(int a){
        salary=a;
        cout<<"salary= "<<salary<<endl;
    }
    int getsalary(){
        return salary;
    }
};
int main(){
    Man m;
    m.setsalary(500);m.bonous=1000;
    cout<<"bonous= "<<m.bonous<<endl;
    return 0;
}