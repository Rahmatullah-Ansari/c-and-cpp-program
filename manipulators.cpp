//manipulators used in cpp.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string name[4];
    int marks[4];
    for(int i=1;i<=3;i++){
        cout<<"Enter name of student "<<i<<"= "<<endl;//use of endl manipulators.
        cin>>name[i];
        cout<<"Enter marks of student "<<i<<"= "<<endl;
        cin>>marks[i];
    }
    //use of setw manipulators.
    cout<<setw(20)<<"Name"<<setw(20)<<"Marks"<<endl;
    for(int i=1;i<=3;i++){
        cout<<setw(20)<<name[i]<<setw(20)<<marks[i]<<endl;
    }
    //use of setfill manipulators.
    cout<<setw(50)<<setfill('*')<<"Hello,welcome in c++ programming."<<endl;
    //use of setbase operator.
    cout<<setbase(8)<<70<<endl;
    //use of setprecision manipulator.
    float p=3.14159265359;
    cout<<setprecision(3)<<p<<endl;
    cout<<scientific<<p<<endl;
    cout<<fixed<<p<<endl;
}