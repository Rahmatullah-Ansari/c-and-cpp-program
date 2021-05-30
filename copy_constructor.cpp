#include<iostream>
using namespace std;
class copy_constructor{
    int x,y;
    public:
    copy_constructor(int a,int b){//parameterized constructor.
        x=a;
        y=b;
    }
    copy_constructor(copy_constructor &cp){//copy constructor.
        x=cp.x;
        y=cp.y;
    }
    void show(){
        cout<<"value of x and y = "<<x<<" and "<<y<<endl;
    }
};
int main(){
    copy_constructor c(20,25);
    c.show();
    copy_constructor c1=c;//copy the value of x and y.
    c1.show();
    copy_constructor c2(c1);//copy the value of x and y.
    return 0;
}