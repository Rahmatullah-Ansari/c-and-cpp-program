//add two complex number using operator overloading.
#include<iostream>
using namespace std;
class sum{
    public:
    int real,img;
    void input(){
        cout<<"Enter real and imaginary part="<<endl;
        cin>>real>>img;
    }
    void show(){
        if(img>0)
        cout<<"sum of two complex numbers = "<<real<<" + "<<img<<"i"<<endl;
        else if(img==0)
        cout<<"sum of two complex numbers = "<<real<<endl;
        else
        cout<<"sum of two complex numbers = "<<real<<img<<"i"<<endl;
    }
    sum operator+(sum s){
        sum s1;
        s1.real=real+s.real;
        s1.img=img+s.img;
        return s1;
    }
};
int main(){
    sum s2,s3;
    cout<<"Enter 1'st number."<<endl;
    s2.input();
    cout<<"Enter 2'nd number."<<endl;
    s3.input();
    (s2+s3).show();
    return 0;
}