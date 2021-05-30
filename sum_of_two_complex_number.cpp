#include<iostream>
using namespace std;
class complex_number{
    float r1,i1,r2,i2;
    public:
    void input(){
        cout<<"Enter real part of first number= "<<endl;
        cin>>r1;
        cout<<"Enter imaginary part of first number= "<<endl;
        cin>>i1;
        cout<<"Enter real part of second number= "<<endl;
        cin>>r2;
        cout<<"Enter imaginary part of second number= "<<endl;
        cin>>i2;
    }
    friend void cmp(complex_number);
    friend void sub(complex_number);
};
void cmp(complex_number c){
    if((c.i1+c.i2)>0)
    cout<<"Sum of two complex number = "<<c.r1+c.r2<<" + "<<c.i1+c.i2<<"i"<<endl;
    else if((c.i1+c.i2)==0)
    cout<<"Sum of two complex number = "<<c.r1+c.r2<<endl;
    else
    cout<<"Sum of two complex number = "<<c.r1+c.r2<<c.i1+c.i2<<"i"<<endl;
}
void sub(complex_number c){
    if((c.i1-c.i2)>0)
    cout<<"Subtraction of two complex number = "<<c.r1-c.r2<<" + "<<c.i1-c.i2<<"i"<<endl;
    else if((c.i1-c.i2)==0)
    cout<<"Subration of two complex number = "<<c.r1-c.r2<<endl;
    else
    cout<<"Subtraction of two complex number = "<<c.r1-c.r2<<c.i1-c.i2<<"i"<<endl;
}
int main(){
    complex_number cm;
    cm.input();
    cmp(cm);
    sub(cm);
    return 0;
}