//explicit constructor.
#include<iostream>
using namespace std;
class Explicit{
    float x,y;
    public:
    explicit Explicit(float x1=0.0,float y1=0.0):x(x1),y(y1){
        //default constructor.
    }
    bool operator == (Explicit ex){
        //method to compare two complex number.
        return(x==ex.x && y==ex.y) ? true : false;
    }
};
int main(){
    Explicit e(2.8,0.0);
    if (e==(Explicit)2.8)
    cout<<"It's same.";
    else
    cout<<"It's not same.";
    return 0;
}